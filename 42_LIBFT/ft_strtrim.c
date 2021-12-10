/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:38:14 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/26 18:18:02 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	char	*s;

	s = (char *)s1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1])
		&& end > start)
		end--;
	if ((start + end) <= 0)
		return (ft_strdup(""));
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s[start], end - start + 1);
	return (ptr);
}
