#include <stddef.h>

#define CNT 64

struct __libc_atexit {
	struct __libc_atexit *next; /* for future support for more then one CNT (probably I will put the limit of 10 structs) */
	void (*f[CNT])(void);
	size_t nf;
};

static struct __libc_atexit __libc_atexits	= (struct __libc_atexit){0};
static struct __libc_atexit __libc_atquickexits	= (struct __libc_atexit){0};

void __libc_atquickexit_funcs(void)
{
	void (*lf)(void);
	if (__libc_atquickexits.nf == 0) return;
	for (lf = __libc_atquickexits.f[__libc_atquickexits.nf - 1]; lf != __libc_atexits.f[0]; --lf)
		lf(); 
}

void __libc_atexit_funcs(void)
{
	void (*lf)(void);
	if (__libc_atexits.nf == 0) return;
	for (lf = __libc_atexits.f[__libc_atexits.nf - 1]; lf != __libc_atexits.f[0]; --lf)
		lf();
}

int at_quick_exit(void (*fn)(void))
{
	if (!fn) return 0;
	if (__libc_atquickexits.nf >= CNT)
		return -1;
	
	__libc_atquickexits.f[__libc_atquickexits.nf] = fn;
	__libc_atquickexits.nf++;
	
	return 0;
}

int atexit(void (*fn)(void))
{
	if (!fn) return 0;
	if (__libc_atexits.nf >= CNT) 
		return -1;

	__libc_atexits.f[__libc_atexits.nf] = fn;
	__libc_atexits.nf++;

	return 0;
}

