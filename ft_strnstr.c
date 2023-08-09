/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 17:10:25 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *tofind, size_t len)
{
	size_t	index;

	index = 0;
	if (len == 0 || len == '\0' || *tofind == '\0')
		return ((char *)s1);
	else if (*s1 != '\0')
	{
		while ((s1[index] && index) < len)
			index++;
		if (len == ft_strlen(tofind))
			return ((char *)s1);
		else if (len < (ft_strlen(s1)) || s1[index] == tofind[index])
			return ((void *)0);
	}
	return ((void *)0);
}
