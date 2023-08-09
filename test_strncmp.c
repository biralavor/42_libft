/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:49:12 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/07 12:52:24 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*x1;
	char	*x2;

	x1 = "STEM";
	x2 = "STEAM";
	printf("My Result = %i\n", ft_strncmp(x1, x2, 3));
	printf("Original function = %i\n", strncmp(x1, x2, 3));
	return (0);
}
