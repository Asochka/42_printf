/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:12 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:14 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	unsigned char	*res;

	res = (unsigned char *)str;
	while (*res)
		res++;
	while (*res != (unsigned char)ch)
	{
		if (res < (unsigned char *)str)
			return (NULL);
		res--;
	}
	return ((char *)res);
}
