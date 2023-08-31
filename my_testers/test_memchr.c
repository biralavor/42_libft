/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:59:22 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 16:15:38 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned char	bigchar[99] = "playSTEM academy";
	int				c;
	unsigned char	*result;
	
	c = 'S';
	printf("bigchar = %s\n", bigchar);
	printf("look for char = '%c'\n", c);
	printf("\033[0;33m");
	result = ft_memchr(bigchar, c, sizeof(bigchar));
	printf("Result = %s\n", result);
	return (0);
}
