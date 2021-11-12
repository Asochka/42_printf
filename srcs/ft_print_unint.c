#include "../includes/ft_printf.h"

int	ft_print_unint(t_print *tab)
{
	unsigned int	a;
	int				ret;

	ret = 0;
	a = va_arg(tab->args, unsigned int);
	ft_putnbr_un(a, &ret);
	return (ret);
}
