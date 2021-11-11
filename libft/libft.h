/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:51 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:53 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strrchr(const char *str, int ch);
int		ft_strncmp(const char *string1, const char *string2, size_t num);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int ch);
void	*ft_memset(void *buf, int c, size_t count);
void	*ft_memmove(void *destptr, const void *srcptr, size_t num);
void	*ft_memcpy(void *destptr, const void *srcptr, size_t num);
int		ft_memcmp(const void *arr1, const void *arr2, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	*ft_calloc(size_t num, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
