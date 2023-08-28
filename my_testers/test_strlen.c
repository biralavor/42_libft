/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:04:35 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 16:06:09 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_strlen_test_one(void)
{
	const char	*test_str;
	size_t		check_result;

	test_str = "playSTEM";
	check_result = 8;
	if (ft_strlen(test_str) == check_result)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_test_all_ft_strlen(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_strlen_test_one();
	printf("\n");
	printf("\033[0;37m");
}
