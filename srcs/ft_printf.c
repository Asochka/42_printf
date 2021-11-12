#include "../includes/ft_printf.h"

// t_print	*ft_initialise_tab(t_print *tab)
// {
// 	tab->wdt = 0;
// 	tab->prc = 0;
// 	tab->zero = 0;
// 	tab->pnt = 0;
// 	tab->sign = 0;
// 	tab->tl = 0;
// 	tab->is_zero = 0;
// 	tab->dash = 0;
// 	tab->perc = 0;
// 	tab->sp = 0;
// 	return (tab);
// }

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	//ft_initialise_tab(tab)
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			ret += ft_eval_format(tab, format, i + 1);
			i++;
		}
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	free (tab);
	return (ret);
}

int main()
{
	int k;
	void *ptr;

	k = printf("12345%% %d %c %s %p %u\n", 10, 'a', "kkk", ptr, 2147483647);
	printf("%d\n", k);
	k = ft_printf("12345%% %d %c %s %p %u\n", 10, 'a', "kkk", ptr, 2147483647);
	printf("%d\n", k);
}
