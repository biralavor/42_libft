/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:32:29 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/24 11:02:50 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *string;

	string = "https://playSTEM.academy/";
	ft_putstr_fd(string, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
