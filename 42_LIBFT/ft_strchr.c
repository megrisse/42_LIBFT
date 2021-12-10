/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:38:44 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/19 01:02:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	int		i;
	char	ret;

	i = 0;
	ret = (unsigned char) x;
	while (str[i] != ret)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return ((char *) str + i);
}
