#include "../includes/ft_printf.h"

int	ft_print_upphex(t_print *tab)
{
	char	a;
	int		ret;

	ret = 0;
	a = va_arg(tab->args, int);
	ret += write(1, &a, 1);
	return (ret);
}