/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:43:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 16:11:29 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	string[] = "The site is https://playSTEM.academy/";
	int		start;
	int		len;

	start = 11;
	len = 30;
	printf("\033[0;33m");
	printf("My subtr = %s\n", ft_substr(string, start, len));
	return (0);
}
