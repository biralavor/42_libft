/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_struct_03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:57 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/06 17:29:02 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

struct s_node
{
	int				data;
	struct s_node	*link;
}					t_node;

struct s_node	*ft_add_at_end(struct s_node *ptr, int data)
{
	struct s_node	*temp;

	temp = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	temp -> data = data;
	temp -> link = NULL;
	ptr -> link = temp;
	return (temp);
}

int	main(void)
{
	struct s_node	*head;
	struct s_node	*ptr;

	head = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	head -> data = 45;
	head -> link = NULL;
	ptr = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	ptr = ft_add_at_end(ptr, 98);
	ptr = ft_add_at_end(ptr, 3);
	ptr = ft_add_at_end(ptr, 67);
	ptr = head;
	printf("\033[0;033m");
	while (ptr != NULL)
	{
		printf("ptr data = %d\n", ptr -> data);
		free (ptr);
		ptr = ptr -> link;
	}
	free (head);
	free (ptr);
	return (0);
}


// https://www.youtube.com/watch?v=80gNiLhyr7A