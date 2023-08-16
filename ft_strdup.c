/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:06:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 18:06:03 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;

	if (src == NULL)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, src, ft_strlen(src));
	ptr[ft_strlen(src)] = '\0';
	return (ptr);
}
