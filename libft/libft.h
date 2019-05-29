/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:43:23 by ysharma           #+#    #+#             */
/*   Updated: 2019/05/29 14:42:04 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strcat(char *s1, const char *s2);

char	*ft_strchr(const char *s, int c);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dst, char *src);

char	*ft_strdup(const char *str1);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlen(char *str);

char	*ft_strncat(char *s1, const char *s2, size_t n);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *haystack, const char *needle);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
