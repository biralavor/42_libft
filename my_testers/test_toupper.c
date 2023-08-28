/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:15:45 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 14:32:46 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	char	toconvert;

	toconvert = 'p';
	printf("Item to test = %c\n", toconvert);
	printf("Original function = %c\n", toupper(toconvert));
	printf("My function = %c\n", ft_toupper(toconvert));
	return (0);
}
