/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 15:59:01 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*dest;
	char	*src;

	dest = "Project, Passion, Peers, Play.";
	src = "Passion, Peers. playSTEM academy.";
	printf("dest = %s\n", dest);
	printf("src  = %s\n", src);
	printf("\033[0;33m");
	printf("My ft_memcmp dest = %d\n", ft_memcmp(dest, src, 15));
	printf("\033[0;34m");
	printf("  Original memcpy = %d\n", memcmp(dest, src, 15));
	return (0);
}

/*
#definitions:
The C library function int memcm
(const void *str1, const void *str2, size_t n))
compares the first n bytes of memory area str1
and memory area str2.
	str1 − This is the pointer to a block of memory.
	str2 − This is the pointer to a block of memory.
	n − This is the number of bytes to be compared.
#Return:
if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2
*/