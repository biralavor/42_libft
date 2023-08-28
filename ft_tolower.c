/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:57:23 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 16:13:47 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
int	main(void)
{
	char c = 'A';

	printf("Original char = %c\n", c);
	printf("\033[0;33m");
	printf("Modified char = %c\n", ft_tolower(c));
	return (0);
}*/