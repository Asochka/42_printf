/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:44:56 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:45:01 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)destptr;
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	if (dest == NULL && src == NULL && num != 0)
		return ((void *)0);
	while (i < num)
	{
		*(dest++) = *(src++);
		i++;
	}
	return (res);
}
