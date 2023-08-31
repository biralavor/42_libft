/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:43:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 10:24:32 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*string;
	int		start;
	int		len;
	char	*result;

	string = "The site is https://playSTEM.academy/";
	start = 11;
	len = 30;
	printf("\033[0;34m");
	printf("Original string = %s\n", string);
	printf("\033[0;33m");
	result = ft_substr(string, start, len);
	printf("My subtr        = %s\n", result);
	free (result);
	return (0);
}
