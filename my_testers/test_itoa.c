/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:19:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:43:06 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		integer;
	char	*result;

	integer = 57;
	printf("Integer value = '%i'\n", integer);
	printf("\033[0;33m");
	result = ft_itoa(integer);
	printf("      My itoa = '%s'\n", result);
	return (0);
}
