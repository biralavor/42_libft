/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:21:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 16:14:16 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_strlcat_test_one_concat(void)
{
	char	*dest;
	char	*source;
	size_t	check_result;

	dest = "a";
	source = " aa!";
	check_result = ft_strlen(dest) + ft_strlen(source);
	printf("check result = %zu\n", check_result);
	if (ft_strlcat(dest, source, ft_strlen(source)) == check_result)
		print_result_is_true();
	else
		print_result_is_false();
	printf("New dest = %zu", ft_strlcat(dest, source, ft_strlen(source)));
}

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
