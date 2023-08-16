/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:37:39 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 11:55:34 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	int				index;
	unsigned char	*newstr;

	newstr = (unsigned char *)str;
	index = 0;
	while (size > 0)
	{
		newstr[index] = (unsigned char)c;
		size--;
		index++;
	}
	return (newstr);
}

/*
#definitions:
The C library function void *memset(void *str, int c, size_t n)
copies the character c (an unsigned char) to the first n characters
of the string pointed to, by the argument str.
*/
