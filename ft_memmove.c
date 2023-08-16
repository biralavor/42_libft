/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:44:40 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 18:09:25 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*newdest;
	char	*newsrc;
	size_t	index;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	newdest = (char *)str1;
	newsrc = (char *)str2;
	if (newdest > newsrc)
		ft_memcpy(newdest, newsrc, n);
	if (newdest < newsrc)
	{
		index = 0;
		while (index < n)
		{
			newdest[index] = newsrc[index];
			index++;
		}
	}
	return (newdest);
}

/*
#definitions:
The C library function void *memmove(void *str1, const void *str2, size_t n)
copies n characters from str2 to str1, but for overlapping memory blocks,
memmove() is a safer approach than memcpy().
	str1 − This is a pointer to the destination array where
			the content is to be copied, type-casted to a
			pointer of type void*.
	str2 − This is a pointer to the source of data to be copied,
			type-casted to a pointer of type void*.
	n − This is the number of bytes to be copied.
*/