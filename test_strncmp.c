/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:49:12 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/15 19:37:25 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*x1;
	char	*x2;

	x1 = "Mussum Ipsum, cacilds vidis litro abertis.";
	x2 = "abertis.";
	printf("\nx1 = %s\n", x1);
	printf("x2 = %s\n", x2);
	printf("Original ft = %i\n", strncmp(x1, x2, 29));
	printf("\033[0;33m");
	printf("  My Result = %i\n", ft_strncmp(x1, x2, 29));
	return (0);
}
