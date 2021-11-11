/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:45:15 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:45:17 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destptr, const void *srcptr, size_t num)
{
	if (destptr == (void *)0 && srcptr == (void *)0)
		return ((void *)0);
	if (destptr < srcptr)
		ft_memcpy(destptr, srcptr, num);
	else
	{
		while (num--)
			((char *)destptr)[num] = ((char *)srcptr)[num];
	}
	return (destptr);
}
