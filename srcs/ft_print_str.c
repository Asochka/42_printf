#include "../includes/ft_printf.h"

int	ft_putstr(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
		return (0);
	while (*s)
	{
		write(1, s, 1);
		ret++;
		s++;
	}
	return (ret);
}

int	ft_print_str(t_print *tab)
{
	char	*s;

	s = va_arg(tab->args, char *);
	return (ft_putstr(s));
}
