/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:34:49 by ysharma           #+#    #+#             */
/*   Updated: 2019/05/30 14:58:11 by ysharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sdtlib.h>

char	*ft_strnew(size_t size)
{
	char	*string;

	string = malloc(size + 1);
	if (string != NULL)
		ft_bzero(string, size + 1);
	return (string);
}
