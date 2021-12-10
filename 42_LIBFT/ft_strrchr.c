/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:50:35 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/19 01:07:57 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s);
	while (len_s >= 0)
	{
		if (s[len_s] == (unsigned char) c)
			return ((char *) s + len_s);
		len_s--;
	}
	return (0);
}
