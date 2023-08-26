/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:03:37 by bira              #+#    #+#             */
/*   Updated: 2023/08/26 14:07:38 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*s_part1;
	char	*s_part2;
	size_t	s_len;
	
	if (!s || !c)
		return (NULL);
	s_len = ft_strlen(s);
}