/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:42:28 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/18 12:00:45 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	if (dlen == size)
		return (slen + size);
	while ((src[i]) && ((dlen + i) < (size - 1)))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
