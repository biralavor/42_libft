/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:55:19 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/23 11:15:35 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	index;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL || s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	if (s_len - start < len)
		len = s_len - start;
	index = -1;
	while (s[++index + start] && (index < len))
		ptr[index] = s[start + index];
	ptr[index] = '\0';
	return (ptr);
}
