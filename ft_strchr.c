/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:20:07 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 23:42:14 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *string, int c)
{
	char	*result;
	size_t	index;
	size_t	diff;

	result = '\0';
	index = 0;
	while (string[index] != '\0')
	{
		while (string[index] != c)
		{
			index++;
			diff++;
		}
		result -= *(result - diff);
		return (result);
	}
	return (0);
}
