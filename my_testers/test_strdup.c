/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:02:07 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 10:20:57 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src);

int	main(void)
{
	char	*src;
	char	*dest;

	src = "Project Peers Passion Play";
	dest = NULL;
	printf("original  src = %s\n", src);
	printf("original dest = %s\n", dest);
	printf("\033[0;33m");
	dest = ft_strdup(src);
	printf("Modified dest = %s\n", dest);
	free (dest);
	return (0);
}
