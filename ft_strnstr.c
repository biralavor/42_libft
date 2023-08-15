/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/15 18:56:16 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *tofind, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!len || *haystack == '\0')
		return (NULL);
	else if (*tofind == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((haystack[i + j] == tofind[j]) && ((i + j) < len))
		{
			j++;
			if (tofind[j] == '\0')
				return ((char *)&haystack[i]);
			else if (haystack[i + j] == '\0')
				break ;
		}
		i++;
	}
	return (NULL);
}
