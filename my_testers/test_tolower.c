/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:15:45 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/07 13:22:06 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	char toconvert;

	toconvert = 'D';
	printf("Item to test = %c\n", toconvert);
	printf("Original function = %c\n", tolower(toconvert));
	printf("My function = %c\n", ft_tolower(toconvert));
	return (0);
}
