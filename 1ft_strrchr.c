/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:58:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/15 20:03:53 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	index;

	index = 0;
	if (((unsigned char)c == '\0') || (str[0] == '\0'))
		return (NULL);
	while (index++)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)str + index);
	}
	index = 0;
	while (*str != '\0')
	{
		if (str[index] == (unsigned char)c)
			return ((char *)str + index);
		index++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	str[] = "https://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("\033[0;33m");
	printf("My result = %s\n", ft_strrchr(str, ch));
	return(0);
}*/