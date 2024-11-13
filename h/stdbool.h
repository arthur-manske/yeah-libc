#ifndef __STDBOOL_H__
#define __STDBOOL_H__

#ifndef __cplusplus
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
#define bool  unsigned char

#define true  ((bool) 1)
#define false ((bool) 0)
#elif __STDC_VERSION__ < 202311L
#define bool  _Bool
#define true  ((bool) 1)
#define false ((bool) 0)
#endif
#endif

#define __bool_true_false_are_defined 1
#endif
