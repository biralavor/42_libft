/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:59 by bira              #+#    #+#             */
/*   Updated: 2023/08/10 18:35:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	length;

	length = 0;
	if (dest_size == 0)
		return (ft_strlen(src));
	else if (dest_size > 0)
	{
		while (*(src + length) != '\0')
		{
			if (length == dest_size)
			{
				length--;
				break ;
			}
			*(dest + length) = *(src + length);
			length++;
		}
	}
	*(dest + length) = '\0';
	while (*(src + length) != '\0')
		length++;
	return (length);
}
