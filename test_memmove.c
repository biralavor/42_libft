/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:33:48 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 14:03:53 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*dest;
	char	*src;

	dest = "Project, Peers, Play";
	src = "Passion. This is playSTEM academy.";
	printf("dest = %s\n", dest);
	printf("src  = %s\n", src);
	printf("\033[0;33m");
	// ft_memmove(dest, src, 5);
	// printf("My ft_memcpy dest = %s\n", dest);
	printf("\033[0;34m");
	memmove(dest, src, 5);
	printf("  Original memcpy = %s\n", dest);
	return (0);
}
