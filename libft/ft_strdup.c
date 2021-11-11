/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:46:08 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:46:10 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (i < (ft_strlen(s) + 1))
	{
		res[i] = (char)(s[i]);
		i++;
	}
	return (res);
}
