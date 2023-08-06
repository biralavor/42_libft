/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:26:41 by bira              #+#    #+#             */
/*   Updated: 2023/08/05 23:43:16 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *string, int c);

int	main(void)
{
	char	*str;
	char	*result;
	int		lookfor;

	str = "Mussum Ipsum, cacilds vidis litro abertis.";
	lookfor = 'r';
	printf("str = %s\n", str);
	printf("lookfor = %d\n", lookfor);
	result = ft_strchr(str, lookfor);
	printf("Result = %s\n", result);
	return (0);
}