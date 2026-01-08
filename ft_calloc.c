/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:26:36 by qgairaud          #+#    #+#             */
/*   Updated: 2026/01/07 18:26:14 by quentin          ###   ########.fr       */
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
