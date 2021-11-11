/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:42:06 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:42:24 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_num(const char *str)
{
	int	k;

	k = 0;
	while (*str)
	{
		if (*str > 47 && *str < 58)
			k++;
		str++;
	}
	return (k);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	char	sign;
	int		k;

	i = 0;
	res = 0;
	k = ft_count_num(str);
	sign = '+';
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	if ((str[i] == 43 || str[i] == 45) && (ft_isdigit(str[i + 1])))
		sign = str[i++];
	while (str[i] > 47 && str[i] < 58)
		res = 10 * res + (int)(str[i++] - 48);
	if ((sign == '-') && (k > 18))
		return (0);
	else if ((sign == '-') && (k <= 18))
		return (res * (-1));
	else if ((k > 18) && (sign == '+'))
		return (-1);
	else
		return (res);
}
