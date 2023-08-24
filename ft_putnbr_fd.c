/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:28:38 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/24 18:46:47 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int nbr)
{
	size_t	index;

	index = 0;
	if (nbr < 0)
		nbr = nbr * -1;
	if (nbr == 0)
		index++;
	while (nbr)
	{
		nbr = nbr / 10;
		index++;
	}
	return (index);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	if (n > 0 && n <= 9)
	{
		n = n % 10 + '0';
		return (ft_putchar_fd(n, fd));
	}
	ptr = ft_itoa(n);
	ft_putstr_fd(ptr, fd);
	free(ptr);
}
