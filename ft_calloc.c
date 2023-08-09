/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:09:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 20:33:43 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t n_items, size_t size)
{
	size_t	*ptr;

	if(!n_items)
		return (NULL);
	else if (size = 0)
		return ((void *)0);
	ptr = malloc(n_items * size);
	if (!ptr)
		return (NULL);
	
}