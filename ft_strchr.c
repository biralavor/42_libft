/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:20:07 by bira              #+#    #+#             */
/*   Updated: 2023/08/10 20:33:34 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	index;

	index = 0;
	if ((unsigned char)c != '\0')
	{
		while (string[index] != '\0')
		{
			if (string[index] == (unsigned char)c)
				return ((char *)string + index);
			index++;
		}
	}
	if (string[index] == (unsigned char)c)
		return ((char *)string + index);
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	int		lookfor;

	str = "Mussum Ipsum, cacilds vidis litro abertis.";
	lookfor = 'o';
	printf("str = %s\n", str);
	printf("lookfor = '%c'\n", lookfor);
	printf("\033[0;33m");
	printf("Result = %s\n", ft_strchr(str, lookfor));
	return (0);
}*/
