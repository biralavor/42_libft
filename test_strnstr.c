/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:49:12 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 19:12:08 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*string;
	char	*needle;
	size_t	max_size;

	string = "Mussum Ipsum, cacilds vidis litro abertis.\nNão sou faixa preta cumpadi, sou preto inteiris, inteiris";
	needle = "is";
	max_size = ft_strlen(needle);
	printf("   string = %s\n", string);
	printf("   needle = %s\n", needle);
	printf("\033[0;33m");
	printf("My Result = %s\n", ft_strnstr(string, needle, max_size));
	return (0);
}
