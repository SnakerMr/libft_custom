/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:08:05 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/26 12:07:52 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int	x;

	x = -1;
	while (++x < (int)n)
		*(unsigned char *)(b + x) = (unsigned char)c;
	return ((void *)b);
}
