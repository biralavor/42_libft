/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:32:58 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 15:51:32 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*newstr;

	index = 0;
	newstr = (unsigned char *)s;
	while (n--)
	{
		newstr[index] = '\0';
		index++;
	}
	return ;
}

/*
#definitions:
The bzero() function shall place n zero-valued
bytes in the area pointed to by s.
*/