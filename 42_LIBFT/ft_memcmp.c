/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:01:42 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/24 18:06:58 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			x;

	x = 0;
	if (n == 0)
		return (0);
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (p1[x] == p2[x] && n - 1 > x)
	{
		x++;
	}
	return (p1[x] - p2[x]);
}
