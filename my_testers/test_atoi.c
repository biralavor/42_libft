/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:55:02 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/01 15:54:17 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		result;
	int		my_result;
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
	return (0);
}

/*
#definitions:
The atoi function in C converts a string of characters
to an integer value. The input is a character string and the
function stops reading the input when it first encounters a
character that is not a number. The atoi function in C can not
convert string in decimal and exponent notation.
It converts the string argument str to an integer (type int)
   str − This is the string representation of an integral number.
Return:
This function returns the converted integral number
as an int value. If no valid conversion could be performed,
it returns zero.*/