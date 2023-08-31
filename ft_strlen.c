/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:48:52 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/10 11:10:01 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *content)
{
	size_t	index;

	index = 0;
	while (content[index] != '\0')
		index++;
	return (index);
}

/*
int	main(void)
{
	char	*string;

	string = "playSTEM";
	printf("string = %s\n", string);
	printf("ft_strlen = %zu\n", ft_strlen(string));
	return (0);
}
*/