/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:00 by bira              #+#    #+#             */
/*   Updated: 2023/08/03 16:58:07 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int content);

int	main(void)
{
	int	test_num;
	int	test_alpha_lower;
	int	test_alpha_upper;
	int	test_non;

	test_num = '3';
	test_alpha_lower = 'g';
	test_alpha_upper = 'U';
	test_non = '[';

	printf("EXPECTED test_num = %i\n", test_num);
	printf("ACTUAL test_num = %i\n", ft_isalnum(test_num));
	printf("EXPECTED test_alpha_lower = %i\n", test_alpha_lower);
	printf("ACTUAL test_alpha_lower = %i\n", ft_isalnum(test_alpha_lower));
	printf("EXPECTED test_alpha_upper = %i\n", test_alpha_upper);
	printf("ACTUAL test_alpha_upper = %i\n", ft_isalnum(test_alpha_upper));
	printf("EXPECTED test_non = %i\n", test_non);
	printf("ACTUAL test_non = %i\n", ft_isalnum(test_non));
	return (0);   
}