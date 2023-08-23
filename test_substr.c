/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:43:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/23 11:13:36 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main (void)
{
	char	string[] = "playSTEM academy";
	int		start;
	int		len;

	start = 4;
	len = 4;
	printf("\033[0;33m");
	printf("      My subtr = %s\n", ft_substr(string, start, len));
	return (0);
}