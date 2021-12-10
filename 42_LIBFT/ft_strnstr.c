/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:08:30 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/23 15:11:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	i;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x])
	{
		i = 0;
		while (haystack[x + i] == needle[i] && x + i < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack + x);
			i++;
		}
		x++;
	}
	return (NULL);
}
