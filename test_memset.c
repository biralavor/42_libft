/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:14:03 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/08 17:36:24 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char	string[50] = "playSTEM academy";

	printf("original string = %s\n", string);
	ft_memset(string, 'M', 2);
	printf("string after memset = %s\n", string);
	return (0);
}
