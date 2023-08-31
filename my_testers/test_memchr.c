/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:59:22 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 15:58:04 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*bigchar;
	int		c;
	char	*result;

	bigchar = "playSTEM academy";
	c = 'S';
	printf("bigchar = %s\n", bigchar);
	printf("look for char = '%c'\n", c);
	printf("\033[0;33m");
	result = ft_memchr(bigchar, c, sizeof(bigchar));
	printf("Result = %s\n", result);
	return (0);
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