#ifndef __LIBCT_UTIL_H__
#define __LIBCT_UTIL_H__

#include <stdarg.h>

#define xvaopt(parm, type, def) ({	\
		type s;			\
		s = va_arg(parm, type);	\
		if (!s)			\
			s = def;	\
		s; })


extern int do_mount(char *src, char *dst, int flags);
extern int set_string(char **dest, char *src);

#endif /* __LIBCT_UTIL_H__ */
