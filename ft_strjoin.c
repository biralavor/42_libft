/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:11:43 by bira              #+#    #+#             */
/*   Updated: 2023/08/26 12:26:34 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr_s1;
	char	*ptr_s2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr_s1 = (char *)malloc((s1_len + 1) * sizeof(char));
	ptr_s2 = (char *)malloc((s2_len + 1) * sizeof(char));
	if (!ptr_s1 || ptr_s2)
		return (NULL);
	while (result++ != s1_len + s2_len)
	{
		/* code */
	}
	
	
	
}
