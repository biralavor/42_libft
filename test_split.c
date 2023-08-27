/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:13:07 by bira              #+#    #+#             */
/*   Updated: 2023/08/27 12:20:30 by bira             ###   ########.fr       */
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
	return (0);
	free(result);
}