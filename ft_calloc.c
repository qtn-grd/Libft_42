/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:26:36 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/26 19:41:47 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			result;
	unsigned char	*p;

	result = nmemb * size;
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	i = 0;
	p = malloc(result);
	if (!p)
		return (NULL);
	while (i < (result))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
