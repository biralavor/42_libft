/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:59:22 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 11:06:25 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *bigptr, int c, size_t len);

int	main(void)
{
	unsigned char	bigchar[99] = "playSTEM academy";
	int				c;
	unsigned char	*result;
	
	c = 'S';
	printf("bigchar = %s\n", bigchar);
	printf("look for char = '%c'\n", c);
	result = ft_memchr(bigchar, c, sizeof(bigchar));
	printf("Result = %s\n", result);
	return (0);
}
