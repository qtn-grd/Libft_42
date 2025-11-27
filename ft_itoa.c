/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:53:50 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/22 17:01:35 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}
