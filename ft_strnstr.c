/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.ft>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:33:31 by lomasson          #+#    #+#             */
/*   Updated: 2022/03/09 17:24:01 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	int			i;
	int			y;
	size_t		t;
	char		*str;

	str = (char *)src;
	i = 0;
	y = 0;
	t = ft_strlen(to_find);
	if (t == 0)
		return (str);
	if (t > ft_strlen(src))
		return (NULL);
	while (t + i <= n)
	{
		if (src[i] == to_find[0])
		{
			if (ft_strncmp(&src[i], to_find, t) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
