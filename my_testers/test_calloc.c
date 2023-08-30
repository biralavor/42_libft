/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:34:58 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/30 17:40:00 by umeneses         ###   ########.fr       */
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
