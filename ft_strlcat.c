/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:59 by bira              #+#    #+#             */
/*   Updated: 2023/08/10 15:30:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t catsize)
{
	size_t	index;
	size_t	dest_len;
	size_t	src_len;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > src_len)
	{
		while (catsize--)
		{
			dest[index + dest_len] = src[index];
			index++;
		}
	}
	else
	{
		while (catsize--)
		{
			dest[dest_len] = src[index];
			dest_len++;
			index++;
		}
	}
	dest[index + dest_len] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char		destination[20] = "playSTEM";
	const char	source[13] = "123456789012";
	
	printf("Original destination = %s\n", destination);
	printf("Original      source = %s\n", source);
	printf("\033[0;33m");
	ft_strlcat(destination, source, 5);
	printf("Modified destination = %s\n", destination);
	return (0);
}*/
