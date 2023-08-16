/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_intro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:36:07 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/02 19:28:29 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_intro(void)
{
	printf("//////___Starting the Testing Session___//////\n\n");
	printf("\033[0;37m");
	printf("If it works, the Result is ");
	printf("\033[0;32m");
	printf("green :D\n");
	printf("\033[0;37m");
	printf("Or have a RedBull for ");
	printf("\033[0;31m");
	printf("red :/\n\n");
	printf("\033[0;37m");
	printf("Now testing the function bellow...\n");
}
