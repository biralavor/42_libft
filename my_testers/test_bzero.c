/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:33:48 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 15:56:13 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*dest;

	dest = "Project, Peers, Play, Passion. This is playSTEM academy.";
	printf("dest = %s\n", dest);
	printf("\033[0;33m");
	ft_bzero(dest, 31);
	printf("My ft_bzero dest = %s\n", dest);
	printf("\033[0;34m");
	bzero(dest, 31);
	printf("  Original bzero = %s\n", dest);
	return (0);
}

/*
#definitions:
The bzero() function shall place n zero-valued
bytes in the area pointed to by s.
*/