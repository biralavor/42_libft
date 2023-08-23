/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:40:18 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/23 16:04:52 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_intlen(int nbr)
{
	int	length;

	length = 0;
	if (nbr == 0)
		return (length = 1);
	if (nbr < 0)
	{
		length++;
		nbr = nbr * -1;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		index;
	char	*result;

	index = ft_intlen(n);
	result = (char *)malloc((index + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (!ft_isdigit((long int)n))
		return (0);
	else
	{
		while (index > 0)
		{
			*result++ = ft_isdigit(n) + '0';
			index--;
			n /= 10;
		}
		result[index] = '\0';
		return (result);
	}
}
