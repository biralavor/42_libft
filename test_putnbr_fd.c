/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:50:50 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/24 18:44:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	long long int	nbr;

	nbr = -2147483648LL;
	printf("\033[0;34m");
	printf("nbr original  = %lli\n", nbr);
	printf("\033[0;33m");
	printf("\n = putnbr_fd de nbr");
	ft_putnbr_fd(nbr, 1);
	return (0);
}
