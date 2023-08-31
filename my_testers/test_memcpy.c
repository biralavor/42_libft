/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/16 12:26:36 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	dest[99] = "Project, Peers, Play";
	char	src[99] = "Passion. This is playSTEM academy.";

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
