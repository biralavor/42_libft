/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:50:50 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/25 20:34:30 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	long long	nbr;

	nbr = -2147483648LL;
	printf("\033[0;34m");
	printf("nbr original  = \n");
	printf("%lli\n", nbr);
	printf("\033[0;33m");
	printf("putnbr_fd de nbr = ");
	printf("\n");
	ft_putnbr_fd(nbr, 1);
	printf("\n");
	return (0);
}
