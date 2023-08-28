/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:12:39 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:30:44 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_isdigit_test_one_int(void)
{
	int	number;

	number = '2';
	if (ft_isdigit(number) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isdigit_test_two_ints(void)
{
	int	number;

	number = 3;
	if (ft_isdigit(number) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_test_all_ft_isdigit(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_isdigit_test_one_int();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isdigit_test_two_ints();
	printf("\n");
	printf("\033[0;37m");
}
