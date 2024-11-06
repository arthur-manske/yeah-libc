#include <stdnoreturn.h>

#include <bits/syscall/exit.h>

/* stdio is not already implemented */
void __stdio_exit(void) {}

void (*const __fini_array_start)(void), (*const __fini_array_end)(void);
void __libc_atexit_funcs(void);
void __libc_atquickexit_funcs(void);
void _fini(void);

noreturn void _Exit(int);
noreturn void _exit(int);

static void __libc_exit_fini(void)
{
	void (*a)(void);
	for (a = __fini_array_end; a > __fini_array_start; --a)
		a();
	_fini();
}

noreturn void quick_exit(int code)
{
	__libc_atquickexit_funcs();
	__libc_exit_fini();
	__stdio_exit();
	_Exit(code);
}

noreturn void exit(int code)
{
	__libc_atexit_funcs(); 
	__libc_exit_fini();
	__stdio_exit();
	_Exit(code);
}
