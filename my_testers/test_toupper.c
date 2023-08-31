/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:15:45 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 16:10:47 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	toconvert;

	toconvert = 'p';
	printf("Item to test = %c\n", toconvert);
	printf("Original function = %c\n", toupper(toconvert));
	printf("My function = %c\n", ft_toupper(toconvert));
	return (0);
}

/*
int	main(void)
{
	char c = 'g';

	printf("Original char = %c\n", c);
	printf("\033[0;33m");
	printf("Modified char = %c\n", ft_toupper(c));
	return (0);
}
*/