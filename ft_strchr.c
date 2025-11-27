/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:47:03 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/15 14:51:36 by qgairaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp_c;
	int		i;

	tmp_c = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp_c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == tmp_c)
		return ((char *) &s[i]);
	return (NULL);
}
