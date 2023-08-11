/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 16:50:10 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *tofind, size_t s1len)
{
	size_t	index;

	index = 0;
	if (s1len == 0 || s1len == '\0' || *tofind == '\0')
		return ((char *)s1);
	else if (*s1 != '\0')
	{
		while ((s1[index] && index) < s1len)
			index++;
		if (s1len == ft_strlen(tofind))
			return ((char *)s1);
		else if (s1len < (ft_strlen(s1)) || s1[index] == tofind[index])
			return ((void *)0);
	}
	return ((void *)0);
}
