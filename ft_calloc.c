/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:09:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 20:15:07 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*ptr;

	if (!n_items)
		return (NULL);
	if (n_items == 0 && size == 0)
		return (NULL);
	ptr = malloc(n_items * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_items * size);
	return (ptr);
}

/*
The calloc() function in C is used to allocate a specified
amount of memory and then initialize it to zero. 
The function returns a void pointer to this memory location,
which can then be cast to the desired type. The function takes
in two parameters that collectively specify the amount of memory 
​to be allocated.
The difference in malloc and calloc is that malloc does not set
the memory to zero where as calloc sets allocated memory to zero.
The name "calloc" stands for contiguous allocation.
The malloc() function allocates memory and leaves
the memory uninitialized, whereas the calloc() function allocates
memory and initializes all bits to zero.
*/