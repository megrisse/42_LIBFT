/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 04:11:49 by megrisse          #+#    #+#             */
/*   Updated: 2021/11/19 01:00:41 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{		
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	nb;
	char		*result;

	len = nb_len(n);
	nb = n;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	if (nb == 0)
		result[0] = '0';
		result[len--] = '\0';
	while (nb)
	{
		result[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (result);
}
