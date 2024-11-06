#include <stdnoreturn.h>

noreturn void exit(int);
void (*const __init_array_start)(void), (*const __init_array_end)(void);
void _init(void);

extern char **__environ;

void __init_libc(char **envp, char *pnam)
{
	__environ = envp;
	return;	
}

static void __libc_start_init(void)
{
	_init();
	void (*a)(void);
	for (a = __init_array_start; a < __init_array_end; ++a)
		a();
}

noreturn static void __libc_start_main_stage2(int (*main)(int, char **, char **), int argc, char **argv)
{
	char **envp = argv + argc + 1;
	__libc_start_init();
	exit(main(argc, argv, envp));
}

noreturn void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*__init)(void), void (*__fini)(void), void (*__ldso), void (*__stack_end))
{
	char **envp = argv + argc + 1;
	__init_libc(envp, argv[0]);
	__libc_start_main_stage2(main, argc, argv);
}
