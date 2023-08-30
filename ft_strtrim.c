/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:05:46 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/30 13:34:41 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	index;
	size_t	i_set;

	if (!*s1 || !*set)
		return (NULL);
	index = 0;
	i_set = 0;
	while (set[i_set])
	{
		if (s[index] == [set[i_set]])
		{
			
		}
	}
	
	result = (char *)ft_calloc(, sizeof(char));
	if (!result)
		return (NULL);
	return (result);
}
