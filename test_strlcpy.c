/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:54:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/06 19:07:39 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

size_t	ft_strlen(const char *content);

#pragma region ft_strlcpy_tests
void	ft_strlcpy_test_one_copy(void)
{
	char	*destination;
	char	*source;
	size_t	check_result;

	destination = "play";
	source = "STEM academy!!!";
	check_result = (ft_strlen(destination) + ft_strlen(source));
	printf("\nCheck_result = %zu\n", check_result);
	printf("ft_strlcpy = %zu", ft_strlcpy(destination, source, 18));
	// if (ft_strlcpy(destination, source, 15) == check_result)
	// 	print_result_is_true();
	// else
	// 	print_result_is_false();
}
#pragma endregion ft_strlcpy_tests

void	ft_test_all_ft_strlcpy(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_strlcpy_test_one_copy();
	printf("\n");
	printf("\033[0;37m");
}
