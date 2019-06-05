/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:49:58 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/05 13:16:08 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	len;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	len = 0;
	while(s[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(*s) * len + 1);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
