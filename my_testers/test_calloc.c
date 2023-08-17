/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:34:58 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/17 17:49:58 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	i;
	int	*ptr;
	int	*ptr2;
	int	sum;
	int sum2;

	i = 0;
	ptr = calloc(10, sizeof(int));
	ptr2 = ft_calloc(10, sizeof(int));
	sum = 0;
	sum2 = 0;
	if (ptr == NULL)
	{
		printf("Error. Memory not allocated.\n");
		return (0);
	}
	printf("sum of 10 elements of INT type.\n");
	while (i < 10)
	{
		*(ptr + i) = i;
		sum += *(ptr + i);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		*(ptr2 + i) = i;
		sum2 += *(ptr2 + i);
		i++;
	}
	printf("\033[0;33m");
	printf("   SUM, using my ft_calloc = %d\n", sum2);
	printf("\033[0;34m");
	printf("SUM, using original calloc = %d\n", sum);
	free(ptr);
	free(ptr2);
	return (0);
}