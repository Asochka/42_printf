/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:50:29 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:50:31 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t	i;

	i = 0;
	while ((i < num) && ((unsigned char)string1[i] == \
		(unsigned char)string2[i]) && (string1[i] != '\0'))
		i++;
	if (((unsigned char)string1[i] == (unsigned char)string2[i]) || i == num)
		return (0);
	else if ((unsigned char)string1[i] > (unsigned char)string2[i])
		return (1);
	else
		return (-1);
}
