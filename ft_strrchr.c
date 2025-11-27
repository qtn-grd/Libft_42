/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:03:24 by qgairaud          #+#    #+#             */
/*   Updated: 2025/11/15 15:05:22 by qgairaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp_c;
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	tmp_c = (char) c;
	while (s[i])
	{
		if (s[i] == tmp_c)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == tmp_c)
	{
		res = (char *) &s[i];
		return (res);
	}
	return (res);
}
