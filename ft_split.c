/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:03:37 by bira              #+#    #+#             */
/*   Updated: 2023/08/29 18:35:33 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_event_counter(char const *s, char c)
{
	size_t	delimiter;

	delimiter = 0;
	while (s[delimiter] != c)
		delimiter++;
	return (delimiter);
}

char	**ft_split(char const *s, char c)
{
	char	*new_s;
	char	**result;
	size_t	s_len;
	size_t	delimiter;

	if (!s || !c)
		return (NULL);
	delimiter = ft_event_counter(s, c);
	new_s = (char *)s;
	s_len = ft_strlen(s);
	result = ft_calloc((s_len - delimiter + 1), sizeof(char *));
	if (!result)
		return (NULL);
	result = (char **)ft_substr(new_s, delimiter, (s_len - delimiter));
	ft_putendl_fd(&new_s[delimiter], 1);
	return (result);
}
