/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:06:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 16:14:17 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*newstr1;
	unsigned char	*newstr2;

	if (n == 0)
		return (0);
	newstr1 = (unsigned char *)str1;
	newstr2 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*newstr1 != *newstr2)
			return (*newstr1 - *newstr2);
		newstr1++;
		newstr2++;
		n--;
	}
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