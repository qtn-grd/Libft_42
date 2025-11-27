/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:00:15 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/25 10:49:15 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_s;
	unsigned char	p_c;

	i = 0;
	p_s = (unsigned char *)s;
	p_c = (unsigned char)c;
	while (i < n)
	{
		p_s[i] = p_c;
		i++;
	}
	return (s);
}
