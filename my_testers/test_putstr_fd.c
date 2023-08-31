/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:32:29 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/28 16:05:59 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*string;

	string = "end!";
	printf("\033[0;33m");
	printf("My ft_putstr_fd = ");
	ft_putstr_fd(string, -1);
	ft_putchar_fd('\n', 1);
	return (0);
}
