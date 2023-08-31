/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:34:07 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:30:53 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_isprint_test_one_nonprint(void)
{
	int	test_non_print;

	test_non_print = '\v';
	if (ft_isprint(test_non_print) == 0)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isprint_test_two_specialprint(void)
{
	int	test_special_char;

	test_special_char = '~';
	if (ft_isprint(test_special_char) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isprint_test_three_xprint(void)
{
	int	test_extended_ascii;

	test_extended_ascii = L'¥';
	if (ft_isprint(test_extended_ascii) == 0)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_test_all_ft_isprint(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_isprint_test_one_nonprint();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isprint_test_two_specialprint();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isprint_test_three_xprint();
	printf("\n");
	printf("\033[0;37m");
}
