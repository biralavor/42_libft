/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:09:36 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/21 16:40:17 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || \
			str[i] == '\v' || str[i] == '\b' || str[i] == '\n' || \
			str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signal *= -1;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	while (ft_isdigit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * signal);
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