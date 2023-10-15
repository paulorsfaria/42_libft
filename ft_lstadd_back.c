/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:09:10 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/15 18:17:01 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	
	node = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while(node->next)
		node = node->next;
	node->next = new;

}
/*primeiro um node com o pointer para o primeiro 
se o lst for null dar lhe logo o valor do new 
dps fazer node->next ate chegar ao fim e adicionar 
o new no next do fim*/