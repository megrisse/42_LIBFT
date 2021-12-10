/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:22:33 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/24 15:28:08 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst > dstsize)
		return (dstsize + len_src);
	dstsize -= len_dst;
	if (dstsize != 0)
	{
		while (src[i] && dstsize - 1 > 0)
		{
			dst[i + len_dst] = src[i];
			i++;
			dstsize--;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
