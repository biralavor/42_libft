/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:55:19 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/27 16:35:34 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (s_len - start < len)
	{
		len = s_len - start + 1;
		ptr = ft_calloc((s_len + 1), sizeof(char));
	}
	if (s_len - start >= len)
		ptr = ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	if (start >= s_len || s[0] == '\0')
	{
		free (ptr);
		return (ft_calloc(1, sizeof(char)));
	}
	ft_strlcpy(ptr, (s + start), (len + 1));
	return (ptr);
}
