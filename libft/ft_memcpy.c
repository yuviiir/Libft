/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 06:41:41 by ysharma           #+#    #+#             */
/*   Updated: 2019/05/29 10:38:45 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dest;
	const char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	while (i < (int)n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
