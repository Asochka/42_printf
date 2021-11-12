/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:34:48 by smana             #+#    #+#             */
/*   Updated: 2021/11/12 17:34:50 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_len_in_hex(unsigned long	a)
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

int	ft_to_hex(unsigned long	a)
{
	char	*k;
	int		i;
	char	*base;
	int		ret;

	base = "0123456789abcdef";
	i = ft_len_in_hex(a);
	ret = ft_len_in_hex(a);
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

int	ft_print_point(t_print *tab)
{
	unsigned long	a;
	int				ret;

	ret = 0;
	a = (unsigned long)va_arg(tab->args, void *);
	write(1, "0x", 2);
	ret = ft_to_hex(a);
	return (ret + 2);
}
