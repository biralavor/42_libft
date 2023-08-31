/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:45:32 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 10:08:00 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	function(unsigned int index, char c)
{
	char	modif_str;
	
	modif_str = c + 1;
	return (modif_str);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	printf("\033[0;34m");
	str1 = "gsso9..ok`xRSDL-`b`cdlx.";
	printf("str1 = %s\n", str1);
	str2 = ft_strmapi(str1, *function);
	printf("\033[0;33m");
	printf("str2 = %s\n", str2);
	free(str2);
	return (0);
}
