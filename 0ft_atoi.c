/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:09:36 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 15:11:52 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{


	return ();
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
it returns zero.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}

*/