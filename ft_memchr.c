/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.ft>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:19:28 by lomasson          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:23 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*j;
	size_t			x;

	x = 0;
	j = (unsigned char *)s;
	while (x < n)
	{
		if (*j == (unsigned char)c)
			return ((void *)j);
		j++;
		x++;
	}
	return (NULL);
}
