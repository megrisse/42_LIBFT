/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:07:42 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/24 17:34:34 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize > 0)
	{
		while (src[x] && --dstsize)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	while (src[x])
	{
		x++;
	}
	return (x);
}
