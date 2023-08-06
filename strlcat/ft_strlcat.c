/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:59 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 20:14:23 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *src)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = 0;
	while (src[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t concat_size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	index;
	
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	// while (dest[dest_length] && dest_length < dest_size)
	// 	dest_length++;
	index = 0;
	if (dest_length < concat_size)
	{
		while ((index + dest_length) < (src_length + concat_size))
		{
			dest[index + dest_length] = src[index];
			index++;
		}
		dest[index + dest_length] = '\0';
	}
	return (dest_length + src_length);
}
