/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:49:12 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/15 18:13:10 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

#define LIMIT 15

int	main(void)
{
	char	*string;
	char	*needle;
	//char	*original;
	size_t	max_size;

	string = "Mussum Ipsum, cacilds vidis litro abertis.";
	needle = "is";
	max_size = ft_strlen(needle);
	printf("String = %s\n", string);
	printf("Needle = %s\n", needle);
	// original = strnstr(string, needle, LIMIT);
	// printf("Original ft = %s\n", original);
	printf("\033[0;33m");
	printf("      My ft = %s\n", ft_strnstr(string, needle, max_size));
	return (0);
}
