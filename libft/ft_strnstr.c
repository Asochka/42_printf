/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:00 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:02 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char	*str1;
	size_t	c;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(little);
	str1 = (char *)big;
	if (s_len == 0 || big == little)
		return (str1);
	if (ft_strlen(str1) == 0)
		return (NULL);
	while (str1[i] != '\0' && i < ft_strlen(str1))
	{
		c = 0;
		while (str1[i + c] != '\0' && little[c] == str1[i + c] \
			&& little[c] != '\0' && i + c < len)
			c++;
		if (c == s_len)
			return (str1 + i);
		i++;
	}
	return (0);
}
