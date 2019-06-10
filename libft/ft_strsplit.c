/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:07:26 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/10 07:07:47 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char 	**str;
	int	i;
	int	len;
	int 	count;
	
	count = 0;
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	if (!(str = (char **)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		while (len > 0)
		{
			if (s[i] != c)
				str[count][i] = s[i];
			else
			{
				count++;
				len--;
			}
			i++;
		}
	}
	return (str);
}

int	main(int ac, char **av)
{
	char	**str;

	if (ac == 3)
	{
		str = ft_strsplit(av[0], av[1][0]);
		printf("%c\n%c",*str[0], *str[1]);
	}
}
