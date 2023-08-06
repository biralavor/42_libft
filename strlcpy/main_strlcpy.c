/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:30 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 18:36:39 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

int	main(void)
{
	char	destiny[99] = "1234";
	char	*source;

	source = "playSTEM academy!!!";
	printf("Original destiny = %s\n", destiny);
	printf("Original source = %s\n", source);
	ft_strlcpy(destiny, source, 15);
	printf("Modified destiny = %s\n", destiny);
	return (0);
}
