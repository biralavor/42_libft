/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:59 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 18:33:03 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	length;
	
	length = 0;
	if (dest_size > 0)
	{
		while (*(src + length) != '\0')
		{
			if (length == dest_size)
			{
				length--;
				break;
			}
			*(dest + length) = *(src + length);
			length++;
		}
	}
	*(dest + length) = '\0';
	while (*(src + length) != '\0')
	{
		length++;
	}
	return (length);
}
