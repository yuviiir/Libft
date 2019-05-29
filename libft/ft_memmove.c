/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 06:53:28 by ysharma           #+#    #+#             */
/*   Updated: 2019/05/29 14:00:23 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest - 1)
		while ((int)(len) >= 0)
		{
			*(dest + len) = *(source + len);
			len--;
		}
	else
		while (i < len)
		{
			*(dest + i) = *(source + i);
			i++;
		}
	return (dst);
}
