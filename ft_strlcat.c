/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:21:18 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 12:50:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t concat_size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	index;

	index = 0;
	src_length = ft_strlen(src);
	while (dest[index] != '\0')
	{
		if ((concat_size - 1) <= (size_t)dest[index])
			index++;
		else
			index = index - (concat_size - 1);
	}
	dest_length = index;
	index = 0;
	if (dest_length > concat_size)
		return (src_length + concat_size);
	else if (dest_length < concat_size)
	{
		while ((index + dest_length) < (src_length))
		{
			dest[index + dest_length] = src[index];
			index++;
		}
		dest[index + dest_length] = '\0';
	}
	return (dest_length + src_length);
}
