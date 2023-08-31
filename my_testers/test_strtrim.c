/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:05:38 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 14:06:11 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;
	char	*trim_set;
	char	*result;

	str = "aab b\nc\tcaa";
	trim_set = "a \n\t";
	printf("\033[0;34m");
	printf("Original string = %s\n", str);
	printf("\033[0;33m");
	result = ft_strtrim(str, trim_set);
	printf("My str trim     = %s\n", result);
	free (result);
	return (0);
}
