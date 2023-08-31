/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:04:20 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 19:47:45 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*newstr;

	index = 0;
	newstr = (unsigned char *)str;
	while (index < n)
	{
		if (newstr[index] == (unsigned char)c)
			return ((void *)newstr + index);
		index++;
	}
	return (NULL);
}

/*
#definitions:
The C library function void *memchr(const void *str, int c, size_t n)
searches for the first occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str.
	str − This is the pointer to the block of memory where
		the search is performed.
	c − This is the value to be passed as an int, but
		the function performs a byte per byte search using the
		unsigned char conversion of this value.
	n − This is the number of bytes to be analyzed.
Return:
This function returns a pointer to the matching byte or NULL
if the character does not occur in the given memory area.
*/