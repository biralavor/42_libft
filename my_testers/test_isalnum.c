/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:58:22 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:33:51 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_isalnum_test_one_num(void)
{
	int	test_num;

	test_num = '3';
	if (ft_isalnum(test_num) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isalnum_test_two_alphalower(void)
{
	int	test_alpha_lower;

	test_alpha_lower = 'g';
	if (ft_isalnum(test_alpha_lower) == 2)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isalnum_test_three_alphaupper(void)
{
	int	test_alpha_upper;

	test_alpha_upper = 'U';
	if (ft_isalnum(test_alpha_upper) == 3)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isalnum_test_four_non(void)
{
	int	test_non;

	test_non = '[';
	if (ft_isalnum(test_non) == 0)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_test_all_ft_isalnum(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_isalnum_test_one_num();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isalnum_test_two_alphalower();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isalnum_test_three_alphaupper();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isalnum_test_four_non();
	printf("\n");
	printf("\033[0;37m");
}
