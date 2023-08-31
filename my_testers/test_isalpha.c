/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:13:40 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/06 17:45:58 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

#pragma region ft_isalpha_tests
void	ft_isalpha_test_one_char(void)
{
	char	c;

	c = 'a';
	if (ft_isalpha(c) == 1)
		print_result_is_true();
	else
		print_result_is_false();
}

void	ft_isalpha_test_two_chars(void)
{
	char	c;

	c = '2';
	if (ft_isalpha(c) == 0)
		print_result_is_true();
	else
		print_result_is_false();
}
#pragma endregion ft_isalpha_tests

void	ft_test_all_ft_isalpha(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_isalpha_test_one_char();
	index++;
	printf("\033[0;37m");
	printf("Test %i // ", index);
	ft_isalpha_test_two_chars();
	printf("\n");
	printf("\033[0;37m");
}
