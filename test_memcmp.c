/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 16:16:24 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	dest[99] = "Project, Passion, Peers, Play.";
	char	src[99] = "Passion, Peers. playSTEM academy.";

	printf("dest = %s\n", dest);
	printf("src  = %s\n", src);
	printf("\033[0;33m");
	printf("My ft_memcmp dest = %d\n", ft_memcmp(dest, src, 15));
	printf("\033[0;34m");
	printf("  Original memcpy = %d\n", memcmp(dest, src, 15));
	return (0);
}
