/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:56:56 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/05 13:11:54 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	len = 0;
	if (s == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	i = 0;
	while (s[i++] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (len + 1));
	j = 0;
	while (len-- > 0)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
