/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:51:51 by smana             #+#    #+#             */
/*   Updated: 2021/10/25 13:52:01 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long n)
{
	int	number;

	number = 0;
	if (n <= 0)
		number = 1;
	else
		number = 0;
	while (n != 0)
	{
		number++;
		n = n / 10;
	}
	return (number);
}

static char	*ft_array(char *s, long number, int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nn;

	nn = (long)n;
	len = ft_length(nn);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	else
	{
		str[len--] = '\0';
		if (nn < 0)
		{
			str[0] = '-';
			nn *= (-1);
		}
		else if (nn == 0)
			str[0] = '0';
		str = ft_array(str, nn, len);
		return (str);
	}
}

#include <stdio.h>

int main()
{
	int n = 0;
	char *str;

	str = ft_itoa(n);
	printf(" result = %s\n", str);
}