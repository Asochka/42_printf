#include "../includes/ft_printf.h"

int	ft_print_int(t_print *tab)
{
	int	a;
	int	ret;

	ret = 0;
	a = va_arg(tab->args, int);
	ft_putnbr(a, &ret);
	return (ret);
}
