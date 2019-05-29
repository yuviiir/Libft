/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 07:05:44 by ysharma           #+#    #+#             */
/*   Updated: 2019/05/28 07:16:32 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	int				i;

	i = 0;
	s2 = (unsigned char *)s;
	while (n > 0)
	{
		if (s2[i] == (unsigned char)c)
			return (s2);
		i++;
		n--;
	}
	return (0);
}
