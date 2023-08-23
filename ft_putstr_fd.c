/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:22:34 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/23 19:49:08 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;
	size_t	len;
	char	c;

	if (fd != 1)
		write(1, "EBADF", 6);
	index = 0;
	// while ((str[index] > 8 && str[index] < 14) || str[i] == ' ')
	// 	index++;
	len = ft_strlen(s) + index;
	while (index <= len)
	{
		c = s[index];
		write(fd, &c, 1);
		index++;
	}
}
