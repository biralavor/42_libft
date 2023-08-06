/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:47:04 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 19:25:27 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *content)
{
	size_t	index;
	size_t	length;

	index = 0;
	length = 0;
	while (content[index] != '\0')
	{
		index++;
		length++;
	}
	return (length);
}
