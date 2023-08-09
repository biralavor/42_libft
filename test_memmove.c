/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:33:48 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/08 20:36:39 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	const char	src[99] = "Project, Peers";
	char		dest[99] = "Play, Passion";

	printf("src = %s\n", src);
	ft_memmove(dest, src, 5);
	printf("dest = %s\n", dest);
	return (0);
}
