/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:48:54 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/18 11:45:53 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	result = ft_calloc((ft_strlen((char *)s) + 1), sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if (!f)
		result = ft_strdup(s);
	else
	{
		result[i] = (*f)(i, s[i]);
		while (++i < ft_strlen((char *)s))
			result[i] = (*f)(i, s[i]);
	}
	return (result);
}
