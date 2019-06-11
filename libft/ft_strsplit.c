/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:07:26 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/11 11:12:35 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char 	**str;
	int		i;
	int		len;
	int 	count;
	int 	j;
	
	count = 0;
	j = 0;
	i = 0;
	len = 1;
	if (!s || !c)
		return (NULL);
	while (s[i] == c)
	{
		count++;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			if (s[i + 1] != c && s[i + 1] != '\0')
				len++;
		}
		i++;
	}
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if ((count == 0 && len == 1) || len == 1)
		return (NULL);
	while (len > count)
	{
		str[count] = ft_strnew(i + 1);
		count++;
	}
	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (len > 0)
		{
			 if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			{
				i++;
				len--;
				count++;
			}
			else if (s[i] == c)
				i++;
			else 
			{
				str[count][j] = s[i];
				i++;
				j++;
			}
		}
	}
	return (str);
}

