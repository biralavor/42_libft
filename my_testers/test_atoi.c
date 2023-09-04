/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:55:02 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/04 10:42:40 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main (void)
{
	int	result;
	int	my_result;
	char	str[20];

	strcpy(str, "\010 +9");
	printf("\033[0;34m");
	result = atoi(str);
	printf("#1 - String value = %s\n", str);
	printf("#1 - Int value (original atoi) = %d\n", result);
	printf("\033[0;33m");
	my_result = ft_atoi(str);
	printf("#1 - Int value (my atoi) = %d\n", my_result);
	printf("\033[0;34m");
	strcpy(str, "https://playSTEM.academy");
	result = atoi(str);
	printf("#2 - String value = %s\n", str);
	printf("#2 - Int value (original atoi) = %d\n", result);
	printf("\033[0;33m");
	my_result = ft_atoi(str);
	printf("#2 - Int value (my atoi) = %d\n", my_result);
	return(0);
}
