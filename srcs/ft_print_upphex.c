#include "../includes/ft_printf.h"

int	ft_len_in_hex_upp(unsigned int	a)
{
	int	k;

	k = 0;
	while (a > 0)
	{
		k++;
		a = a / 16;
	}
	return (k);
}

int	ft_to_hexupp(unsigned int	a)
{
	char	*k;
	int		i;
	char	*base;
	int		ret;

	base = "0123456789ABCDEF";
	i = ft_len_in_hex_upp(a);
	ret = ft_len_in_hex_upp(a);
	k = (char *)malloc((i + 1) * sizeof(char));
	k[i] = '\0';
	while (a > 0)
	{
		k[--i] = base[a % 16];
		a = a / 16;
	}
	while (*k)
	{
		write(1, k, 1);
		k++;
	}
	return (ret);
}

int	ft_print_upphex(t_print *tab)
{
	unsigned int	a;
	int				ret;

	ret = 0;
	a = va_arg(tab->args, unsigned int);
	ret = ft_to_hexupp(a);
	return (ret);
}