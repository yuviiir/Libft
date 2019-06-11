/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:07:26 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/11 15:02:46 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_wordcounter(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;

	i = 0;
	len = 1;
	if (!s || !c)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i++] == c)
			if (s[i] != c && s[i] != '\0')
				len++;
	}
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	str[len] = NULL;
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		count;
	int		j;

	count = 0;
	j = 0;
	i = 0;
	if ((str = ft_wordcounter(s, c)) == NULL)
		return (NULL);
	while (s[i] != '\0')
		if ((s[i] == c || i == 0) && s[i + 1] != c && s[i + 1] != '\0')
		{
			if (s[i] == c)
				i++;
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			str[count] = ft_strsub(s, i, j);
			count++;
			i = i + j;
		}
		else
			i++;
	return (str);
}
