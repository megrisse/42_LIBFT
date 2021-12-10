/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 07:36:35 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/24 15:15:22 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				x;

	x = 0;
	if (n == 0)
		return (0);
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (p1[x] && p2[x] && p1[x] == p2[x] && n - 1 > 0)
	{
		x++;
		n--;
	}
	return (p1[x] - p2[x]);
}
