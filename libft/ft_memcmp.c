/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:44:39 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:44:40 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*arrcpy1;
	unsigned char	*arrcpy2;

	if (!n)
		return (0);
	arrcpy1 = (unsigned char *)arr1;
	arrcpy2 = (unsigned char *)arr2;
	while (n-- && (*arrcpy1 == *arrcpy2))
	{
		arrcpy1++;
		arrcpy2++;
	}
	if (!(n + 1))
		return (0);
	return (*arrcpy1 - *arrcpy2);
}
