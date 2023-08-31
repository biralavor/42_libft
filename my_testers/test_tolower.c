/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:15:45 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 16:07:41 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	toconvert;

	toconvert = 'D';
	printf("Item to test = %c\n", toconvert);
	printf("Original function = %c\n", tolower(toconvert));
	printf("My function = %c\n", ft_tolower(toconvert));
	return (0);
}

/*
int	main(void)
{
	char c = 'A';

	printf("Original char = %c\n", c);
	printf("\033[0;33m");
	printf("Modified char = %c\n", ft_tolower(c));
	return (0);
}*/