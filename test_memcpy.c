/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:57:10 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/08 20:05:57 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *content);

int	main(void)
{
	const char	src[99] = "Project, Peers";
	char		dest[99] = "Play, Passion";

	printf("src = %s\n", src);
	ft_memcpy(dest, src, (ft_strlen(dest) + 1));
	printf("dest = %s\n", dest);
	return (0);
}
