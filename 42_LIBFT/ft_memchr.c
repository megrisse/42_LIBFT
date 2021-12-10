/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:58:42 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/19 01:00:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *) s;
	while (x < n)
	{
		if (p[x] == (unsigned char) c)
			return ((void *) p + x);
		x++;
	}
	return (0);
}
