/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:58:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 15:00:43 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{



	return (pointer)
}

/*
#definitions
The C library function char *strrchr(const char *str, int c)
searches for the last occurrence of the character c (an unsigned char)
in the string pointed to, by the argument str.

str − This is the C string.
  c − This is the character to be located.
  	It is passed as its int promotion, but it is internally
	converted back to char.

#Return:
This function returns a pointer to the last occurrence
of character in str. If the value is not found, the function
returns a null pointer.

int main () {
   int len;
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}


*/