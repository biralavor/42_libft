/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:54:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 18:41:10 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy_test_one_copy(void)
{
	char	*destination;
	char	*source;

	destination = "play";
	source = "STEM academy!!!";
	printf("ft_strlcpy = %zu", ft_strlcpy(destination, source, 18));
}

int	main(void)
{
	ft_strlcpy_test_one_copy();
	return (0);
}
