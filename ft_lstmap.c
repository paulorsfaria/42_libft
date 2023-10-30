/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:47:22 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/30 16:29:38 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*first;
	
	if(!lst ||!f ||!del)
		return (NULL);
	lista = ft_lstnew(f(lst->content));
	first = lista;
	while(lst->next != NULL)
	{	
		lst = lst->next;
		lista = ft_lstnew(f(lst->content));
		if(!lista->next)
			ft_lstclear(&lista, del);
		lista = lista->next;
	}
	return(lista);
}