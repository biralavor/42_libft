/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:34:58 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/31 15:56:44 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_test_original_calloc(void)
{
	int	i;
	int	*ptr;
	int	sum;

	ptr = calloc(10, sizeof(int));
	i = 0;
	sum = 0;
	while (i < 10)
	{
		*(ptr + i) = i;
		sum += *(ptr + i);
		i++;
	}
	printf("SUM, using original calloc = %d\n", sum);
	free(ptr);
}

void	ft_test_my_calloc(void)
{
	int	i;
	int	*ptr;
	int	sum;

	i = 0;
	sum = 0;
	ptr = ft_calloc(10, sizeof(int));
	while (i < 10)
	{
		*(ptr + i) = i;
		sum += *(ptr + i);
		i++;
	}
	printf("   SUM, using my ft_calloc = %d\n", sum);
	free(ptr);
}

int	main(void)
{
	ft_test_original_calloc();
	ft_test_my_calloc();
	return (0);
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
memory and initializes all bits to zero. */