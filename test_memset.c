/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:14:03 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 11:54:42 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	string[50] = "playSTEM academy";

	printf("original string = %s\n", string);
	printf("\033[0;33m");
	printf("My memset       = %s\n", (char *)ft_memset(string, 'T', 5));
	printf("Original memset = %s\n", (char *)memset(string, 'T', 5));
	return (0);
}
