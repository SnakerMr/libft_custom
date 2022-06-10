/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:42:01 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/27 10:37:28 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n )
{
	int				x;
	unsigned char	*put_dest;
	const char		*put_src;

	put_dest = dest;
	put_src = src;
	if (n <= 0 || src == NULL || dest == NULL)
		return (dest);
	if (dest > src)
	{
		x = (int)n;
		x--;
		while (x >= 0)
		{
			put_dest[x] = put_src[x];
			x--;
		}
	}
	else
		while (n-- > 0)
			*put_dest++ = *put_src++;
	return (dest);
}
