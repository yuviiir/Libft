/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:20:14 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/05 13:15:47 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int					i;
	unsigned int		len;
	char				*str;

	if (!s)
		return (NULL);
	len = 0;
	while(s[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(*s) * len + 1);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
