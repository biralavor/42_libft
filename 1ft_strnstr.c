/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/11 19:27:22 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 || len == '\0' || tofind[0] == '\0')
		return ((char *)haystack);
	else if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	j = 0;
	while ((haystack[i] && i) < len)
	{
		while (haystack[i] == tofind[j])
		{
			i++;
			j++;
			if (tofind[j] == '\0')
				return ((char *)&haystack[i - j]);
			else if (haystack[i] == '\0')
				break ;
		}
		
		i = i - j + 1;
	}
	return ((void *)0);
}
