/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.ft>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:31:22 by lomasson          #+#    #+#             */
/*   Updated: 2022/06/10 16:34:57 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*str;
	int		nbr;

	buffer = ft_calloc(2, sizeof(char));
	str = NULL;
	nbr = read(fd, buffer, 1);
	if (nbr > 0)
		str = ft_calloc(2, sizeof(char));
	while (nbr > 0 && buffer[0] != '\n')
	{
		str = ft_strjoin(str, buffer);
		nbr = read(fd, buffer, 1);
	}
	if (buffer[0] == '\n')
		str = ft_strjoin(str, "\n");
	free (buffer);
	return (str);
}
