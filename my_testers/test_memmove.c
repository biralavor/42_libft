/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:33:48 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 16:57:32 by umeneses         ###   ########.fr       */
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
	ft_memmove(dest, src, 25);
	printf("My ft_memcpy dest = %s\n", dest);
	printf("\033[0;34m");
	memmove(dest, src, 25);
	printf("  Original memcpy = %s\n", dest);
	return (0);
}
