/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:12:34 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/26 17:35:23 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define INT_NUMBER 100

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	int		x;

	x = -1;
	tab = (char *)malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
