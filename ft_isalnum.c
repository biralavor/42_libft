/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:10:22 by bira              #+#    #+#             */
/*   Updated: 2023/08/10 14:48:56 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned char content)
{
	return ((content >= '0' && content <= '9') || \
			(content >= 'a' && content <= 'z') || \
			(content >= 'A' && content <= 'Z'));
}
