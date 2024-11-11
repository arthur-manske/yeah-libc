#include <stdnoreturn.h>

void _fini(void);
void _init(void);

extern int main(int, char **, char **);
extern noreturn void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(), void (*)(), void (*)(), void (*)());

noreturn void _start_c(long *p) 
{
	int argc = p[0];
	char **argv = (void *) (p + 1);
	__libc_start_main(main, argc, argv, _init, _fini, (void *) 0, (void *) 0);
}
