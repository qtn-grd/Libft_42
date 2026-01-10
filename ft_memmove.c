/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:27:38 by qgairaud          #+#    #+#             */
/*   Updated: 2026/01/10 14:52:10 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (pdst > psrc)
	{
		while (n-- > 0)
			pdst[n] = psrc[n];
	}
	else
	{
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
