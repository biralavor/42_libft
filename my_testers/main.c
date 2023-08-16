/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:13:40 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/08 19:56:48 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Library header
#include "print_msgs.h"
// Custom Library functions

void	ft_test_all_ft_isalnum(void);
void	ft_test_all_ft_isalpha(void);
void	ft_test_all_ft_isascii(void);
void	ft_test_all_ft_isdigit(void);
void	ft_test_all_ft_isprint(void);
// void	ft_test_all_ft_memcpy(void);
// void	ft_test_all_ft_memset(void);
// void	ft_test_all_ft_strchr(void);
// void	ft_test_all_ft_strdup(void);
// void	ft_test_all_ft_strlcat(void);
// void	ft_test_all_ft_strlcpy(void);
void	ft_test_all_ft_strlen(void);

int	main(void)
{
	print_intro();
	printf("\033[0;34m");
	printf("ft_isalnum\n");
	printf("\033[0;37m");
	ft_test_all_ft_isalnum();
	printf("\033[0;34m");
	printf("ft_isalpha\n");
	printf("\033[0;37m");
	ft_test_all_ft_isalpha();
	printf("\033[0;34m");
	printf("ft_isascii\n");
	printf("\033[0;37m");
	ft_test_all_ft_isascii();
	printf("\033[0;34m");
	printf("ft_isdigit\n");
	printf("\033[0;37m");
	ft_test_all_ft_isdigit();
	printf("\033[0;34m");
	printf("ft_isprint\n");
	printf("\033[0;37m");
	ft_test_all_ft_isprint();
	// printf("\033[0;34m");
	// printf("ft_memcpy\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_memcpy();
	// printf("\033[0;34m");
	// printf("ft_memset\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_memset();
	// printf("\033[0;34m");
	// printf("ft_strchr\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_strchr();
	// printf("\033[0;34m");
	// printf("ft_strdup\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_strdup();
	// printf("\033[0;34m");
	// printf("ft_strlcat\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_strlcat();
	// printf("\033[0;34m");
	// printf("ft_strlcpy\n");
	// printf("\033[0;37m");
	// ft_test_all_ft_strlcpy();
	printf("\033[0;34m");
	printf("ft_strlen\n");
	printf("\033[0;37m");
	ft_test_all_ft_strlen();
	return (0);
}
// Black	\033[0;30m
// Red		\033[0;31m
// Green	\033[0;32m
// Yellow	\033[0;33m
// Blue		\033[0;34m
// Purple	\033[0;35m
// Cyan		\033[0;36m
// White	\033[0;37m
