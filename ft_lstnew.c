/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:09:58 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/30 20:54:21 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main() {
    // Test the ft_lstnew function
    int *data = (int *)malloc(sizeof(int));
    *data = 42; // Example data to store in the list node

    t_list *new_node = ft_lstnew(data);

    if (new_node) {
        printf("New Node Content: %d\n", *((int *)(new_node->content)));
        free(new_node->content);
        free(new_node);
    } else {
        printf("Failed to create a new node.\n");
    }

    return 0;
}*/