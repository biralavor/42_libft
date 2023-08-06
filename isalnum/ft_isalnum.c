/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:10:22 by bira              #+#    #+#             */
/*   Updated: 2023/08/03 18:10:23 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(unsigned char content)
{
	if (content >= '0' && content <= '9')
	{
		return (1);
	}
	else if (content >= 'a' && content <= 'z')
	{
		return (2);
	}
	else if (content >= 'A' && content <= 'Z')
	{
		return (3);
	}
	else
		return (0);
}
