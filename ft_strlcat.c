/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:59 by bira              #+#    #+#             */
/*   Updated: 2023/08/10 19:46:45 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t catsize)
{
	size_t	index;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= catsize)
		return (catsize + src_len);
	index = 0;
	while ((src[index] != '\0') && ((dest_len + index + 1) < catsize))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char		destination[9] = "playSTEM";
	const char	source[23] = "12345678901234567890";
	
	printf("Original destination = %s\n", destination);
	printf("Original      source = %s\n", source);
	printf("\033[0;33m");
	ft_strlcat(destination, source, 23);
	printf("Modified destination = %s\n", destination);
	return (0);
}*/
