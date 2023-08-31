/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:16:00 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 16:09:51 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
/*
#include "print_msgs.h"
// Custom Library functions

#pragma region ft_strchr_tests
void	ft_strchr_test_one_o(void)
{
	char	*str;
	char	*lookfor;
	int		index;

	index = 0;
	str = "Mussum Ipsum, cacilds vidis litro abertis.";
	lookfor = "ab";
	if (ft_strchr(str, (int)lookfor) == lookfor[index])
		print_result_is_true();
	else
		print_result_is_false();
}
#pragma endregion ft_strchr_tests

void	ft_test_all_ft_strchr(void)
{
	ft_strchr_test_one_o();
}
*/

int	main(void)
{
	char	*str;
	char	lookfor;

	str = "Mussum Ipsum, cacilds vidis litro abertis.";
	lookfor = 'm';
	printf("str = %s\n", str);
	printf("lookfor = '%c'\n", lookfor);
	printf("\033[0;33m");
	printf("Result = '%s'\n", ft_strrchr(str, lookfor));
	return (0);
}
