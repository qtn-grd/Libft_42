/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:48:54 by qgairaud          #+#    #+#             */
/*   Updated: 2026/01/10 14:49:46 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_calloc((ft_strlen((char *)s) + 1), sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
		result[i] = (*f)(i, s[i]);
	return (result);
}
