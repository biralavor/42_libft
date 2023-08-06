/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:30 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 20:15:59 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t concat_size);

int	main(void)
{
	char	destination[20] = "PlaySTEM";
	char	*source;

	source = " academy!";
	printf("Original destination = %s\n", destination);
	printf("Original source = %s\n", source);
	ft_strlcat(destination, source, 10);
	printf("Modified destination = %s\n", destination);
	return (0);
}
