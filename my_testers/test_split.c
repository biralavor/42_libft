/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:13:07 by bira              #+#    #+#             */
/*   Updated: 2023/08/30 12:57:26 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s_long;
	char	delimiter;
	char	**result;
	size_t	index;

	s_long = "https://playSTEM.academy/";
	delimiter = 'a';
	printf("\033[0;34m");
	printf("s1           = %s\n", s_long);
	printf("\033[0;33m");
	printf("delimiter    = '%c'\n", delimiter);
	result = ft_split(s_long, delimiter);
	index = 0;
	while (result[index] != NULL)
	{
		printf("My str_split[%zu] = %s\n", index, result[index]);
		free(result[index]);
		index++;
	}
	free(result);
	return (0);
}
