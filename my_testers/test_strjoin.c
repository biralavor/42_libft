/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:16:47 by bira              #+#    #+#             */
/*   Updated: 2023/08/30 19:12:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "https://";
	s2 = "playSTEM.academy/";
	printf("\033[0;34m");
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("\033[0;33m");
	result = ft_strjoin(s1, s2);
	printf("strjoin = %s\n", result);
	free (result);
	return (0);
}
