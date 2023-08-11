/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:49:12 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 15:30:59 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *tofind, size_t len);

int	main(void)
{
	char	*x1;
	char	*x2;

	x1 = "Mussum Ipsum, cacilds vidis litro abertis.";
	x2 = "Não sou faixa preta cumpadi, sou preto inteiris, inteiris.";
	printf(" x1 = %s\n", x1);
	printf(" x2 = %s\n", x2);
	printf("\033[0;33m");
	//printf("My Result = %s\n", ft_strnstr(x1, x2, 2));
	//printf("Original function = %i\n", strnstr(x1, x2, 3));
	return (0);
}
