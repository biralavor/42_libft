/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:49:23 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 19:25:43 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *content);

int	main(void)
{
	const char	*test_str;
	
	test_str = "playSTEM";
	printf("Original strlength = %li\n", strlen(test_str));
	printf("My ft_strlen = %i\n", ft_strlen(test_str));
	return (0);
}