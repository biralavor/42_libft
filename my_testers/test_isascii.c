/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:34:07 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:31:08 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_isascii_test_one_nonprint(void)
{
	int	test_non_print;

	test_non_print = '\b';
	if (ft_isascii(test_non_print) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isascii_test_two_specialchar(void)
{
	int	test_special_char;
	
	test_special_char = '}';
	if (ft_isascii(test_special_char) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isascii_test_three_extended(void)
{
	int	test_extended_ascii;

	test_extended_ascii = L'Ç';
	if (ft_isascii(test_extended_ascii) == 0)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_test_all_ft_isascii(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_isascii_test_one_nonprint();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isascii_test_two_specialchar();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isascii_test_three_extended();
	printf("\n");
	printf("\033[0;37m");
}
