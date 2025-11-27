/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:53:56 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/22 19:43:18 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strresult(const char *s1, size_t start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if ((len == 0) || (start >= ft_strlen(s1)))
		return (ft_strdup(""));
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
		result[i++] = s1[start++];
	return (result);
}

static int	to_test(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (to_test(s1[start], set))
		start++;
	while (to_test(s1[end], set) && end > start)
		end--;
	len = (end - start) + 1;
	result = strresult(s1, start, len);
	return (result);
}
