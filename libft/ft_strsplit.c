/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:07:26 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/11 12:05:55 by ysharma          ###   ########.fr       */
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
	ft_putendl("Test 02");
	if (!s || !c)
		return (NULL);
	while (s[i] == c)
	{
		count++;
		i++;
	}
	ft_putendl("Test 03");
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
	ft_putendl("Test 04");
	if ((count == 0 && len == 1) || len == 1)
		return (NULL);
	ft_putendl("Test 05");
	while (len > count)
	{
		str[count] = ft_strnew(i + 1);
		count++;
	}
	ft_putendl("Test 06");
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
				ft_putendl("Test 07");
				i++;
				j++;
			}
		}
	}
	return (str);
}

