/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:04:29 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/18 10:04:48 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_memory(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

static int	is_sep(char tested, char sep)
{
	if (tested == sep)
		return (1);
	return (0);
}

static char	*create_word(const char *str, char sep)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len] && !is_sep(str[len], sep))
		len++;
	word = ft_calloc((len + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (str[i] && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

static int	count_words(const char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] && !is_sep(str[i], sep))
		{
			count++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	result = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s && !is_sep(*s, c))
		{
			result[i] = create_word(s, c);
			if (!result[i])
				return (free_memory(result, i - 1), NULL);
			i++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	return (result);
}
