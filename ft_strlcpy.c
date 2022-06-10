/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:05:46 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/26 18:35:20 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	tmp;

	tmp = 0;
	if (!dst || !src)
		return (0);
	while (src[tmp])
		tmp++;
	if (!size)
		return (tmp);
	while (--size && *src)
		*dst++ = *src++;
	*dst = 0;
	return (tmp);
}
