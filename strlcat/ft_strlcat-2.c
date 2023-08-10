/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat-2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:21:18 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/10 11:13:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcatttt(char *dest, const char *src, size_t concat_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	index = 0;
	src_len = ft_strlen(src);
	while (dest[index] != '\0')
	{
		if ((concat_size - 1) <= (size_t)dest[index])
			index++;
		else
			index = index - (concat_size - 1);
	}
	dest_len = index;
	index = 0;
	if (dest_len > concat_size)
		return (src_len + concat_size);
	else if (dest_len < concat_size)
	{
		while ((index + dest_len) < (src_len))
		{
			dest[index + dest_len] = src[index];
			index++;
		}
		dest[index + dest_len] = '\0';
	}
	return (dest_len + src_len);
}
