/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:01:58 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 20:29:43 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	if (num == 0)
		return (0);
	while (num > 0)
	{
		if (*str2 == '\0' || *str1 == '\0')
			break ;
		if (*str1 != *str2)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
			if (*str2 == '\0' || *str1 == '\0')
				break ;
		}
		str1++;
		str2++;
		num--;
	}
	return (0);
}
