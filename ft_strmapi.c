/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:41:24 by lomasson          #+#    #+#             */
/*   Updated: 2022/03/07 19:14:58 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	j = -1;
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	while (++j < i)
		res[j] = f(j, s[j]);
	res[j] = '\0';
	return (res);
}
