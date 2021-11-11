/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:24 by smana             #+#    #+#             */
/*   Updated: 2021/10/25 14:23:26 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1);
	i = 0;
	if (!sub)
		return (NULL);
	while ((i < len) && (*s))
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
