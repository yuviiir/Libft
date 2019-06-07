/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:56:56 by ysharma           #+#    #+#             */
/*   Updated: 2019/06/07 09:54:21 by ysharma          ###   ########.fr       */
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

	if (s == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n' || s[len] == '\0')
		len--;
	len = (len - i) + 1;
	if (len <= 0)
		return (ft_strnew(0));
	if (!(str = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	j = 0;
	while (len-- > 0)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
