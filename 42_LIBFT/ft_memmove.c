/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 04:15:22 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/19 01:01:32 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	int		x;

	cdst = (char *) dst;
	csrc = (char *) src;
	x = 0;
	if (!src && !dst)
		return (NULL);
	if (csrc < cdst)
		while (len-- > 0)
			cdst[len] = csrc[len];
	else
		ft_memcpy(cdst, csrc, len);
	return ((void *)cdst);
}
