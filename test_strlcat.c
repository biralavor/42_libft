/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:21:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/06 13:50:10 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

size_t	ft_strlen(const char *content);
size_t	ft_strlcat(char *dest, const char *src, size_t concat_size);

#pragma region ft_strlcat_tests
void	ft_strlcat_test_one_concat(void)
{
	char	*destination;
	char	*source;
	size_t	check_result;

	destination = "a";
	source = " aa!";
	check_result = ft_strlen(destination) + ft_strlen(source);

	printf("check result = %zu\n", check_result);

	if (ft_strlcat(destination, source, ft_strlen(source)) == check_result)
		print_result_is_true();
	else
		print_result_is_false();
	
	printf("New destination = %zu", ft_strlcat(destination, source, ft_strlen(source)));
}
#pragma endregion ft_strlcat_tests

void	ft_test_all_ft_strlcat(void)
{
	int	index;

	index = 1;
	printf("Test %i // ", index);
	ft_strlcat_test_one_concat();
	printf("\n");
	printf("\033[0;37m");
}

int	main(void)
{
	ft_strlcat_test_one_concat();
	return (0);
}
