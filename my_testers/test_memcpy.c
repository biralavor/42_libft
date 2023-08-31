/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 16:23:48 by umeneses         ###   ########.fr       */
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
	ft_memcpy(dest, src, 5);
	printf("My ft_memcpy dest = %s\n", dest);
	printf("\033[0;34m");
	memcpy(dest, src, 5);
	printf("  Original memcpy = %s\n", dest);
	return (0);
}
