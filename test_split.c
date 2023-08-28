/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:13:07 by bira              #+#    #+#             */
/*   Updated: 2023/08/28 11:19:36 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s_long;
	char	delimiter;
	char	*result;

	s_long = "https://playSTEM.academy/";
	delimiter = 'y';
	printf("\033[0;34m");
	printf("s1        = %s\n", s_long);
	printf("delimiter = '%c'\n", delimiter);
	printf("\033[0;33m");
	result = (char *)ft_split(s_long, delimiter);
	printf("str_split = %s\n", result);
	free(result);
	return (0);
}