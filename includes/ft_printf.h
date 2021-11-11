#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list  args;
    //   int   wdt;
    //   int   prc;
    //   int   zero;
    //   int   pnt;
    //   int   dash;
	int   tl;
    //   int   sign;
    //   int   is_zero;
    //   int   perc;
    //   int   sp;
}    t_print;
#endif
