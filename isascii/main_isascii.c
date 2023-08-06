/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:30:43 by bira              #+#    #+#             */
/*   Updated: 2023/08/03 18:06:16 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int content);

int	main(void)
{
	char	test_non_print;
	char	test_special_char;
	//char	test_extended_ascii;

	test_non_print = '\b';
	test_special_char = '}';
	//test_extended_ascii = '®';
	printf("EXPECTED test_non_print: int = %i char = %c\n", test_non_print, test_non_print);
	if (ft_isascii(test_non_print))
	{
		printf("ACTUAL test_non_print: int = %i\n. Test is OK\n", ft_isascii(test_non_print));
	}
	printf("EXPECTED test_special_char: int = %i char = %c\n", test_special_char, test_special_char);
	if (ft_isascii(test_special_char))
	{
		printf("ACTUAL test_special_char: int = %i\n. Test is OK\n", ft_isascii(test_special_char));
	}
	/*
	printf("EXPECTED test_extended_ascii: int = %i char = %c\n", test_extended_ascii, test_extended_ascii);
	if (ft_isascii(test_extended_ascii))
	{
		printf("ACTUAL test_extended_ascii: int = %i\n. Test is OK\n", ft_isascii(test_extended_ascii));
	}
	*/
	return (0);
}