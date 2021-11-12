#include "../includes/ft_printf.h"

int	ft_print_point(t_print *tab)
{
	unsigned long	a;
	int				ret;

	ret = 0;
	a = (unsigned long)va_arg(args, void *);
	ret += write(1, &a, 1);
	return (ret);
}