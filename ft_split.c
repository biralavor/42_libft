/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:03:37 by bira              #+#    #+#             */
/*   Updated: 2023/08/28 11:18:22 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*s_part1;
	char	**result;
	size_t	s_len;
	size_t	index;
	size_t	delimiter;

	if (!s || !c)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char **)malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	index = -1;
	delimiter = 0;
	s_part1 = "";
	while (s[++index] != c && index <= s_len)
	{
		s_part1[delimiter] = s[index];
		delimiter++;
	}
	ft_strlcpy((char *)result, s_part1, (delimiter + 1));
	**result = '\0';
	return (result);
}
