/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:33:48 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 16:00:05 by umeneses         ###   ########.fr       */
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
	ft_memmove(dest, src, 25);
	printf("My ft_memcpy dest = %s\n", dest);
	printf("\033[0;34m");
	memmove(dest, src, 25);
	printf("  Original memcpy = %s\n", dest);
	return (0);
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