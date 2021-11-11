/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:44:19 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:44:22 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*arrcpy;

	i = 0;
	arrcpy = (unsigned char *)arr;
	while (i < n)
	{
		if (*(arrcpy + i) == (unsigned char)c)
			return ((void *)(arr + i));
		i++;
	}
	return (NULL);
}
