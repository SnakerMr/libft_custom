/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.ft>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:25:04 by lomasson          #+#    #+#             */
/*   Updated: 2022/03/10 09:26:44 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*ptr;
	char	*dest;

	str = (char *)s;
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	dest = ptr;
	while (*str != '\0')
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = *str;
	return (dest);
}
