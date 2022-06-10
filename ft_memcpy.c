/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:12:43 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/26 17:49:14 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*put_dest;
	const char		*put_src;

	put_dest = dest;
	put_src = src;
	while (n > 0 && (dest != NULL || src != NULL))
	{
		*put_dest++ = *put_src++;
		n--;
	}
	return (dest);
}
