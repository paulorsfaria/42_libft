/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:55:36 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/23 14:57:50 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

 void ft_bzero(void *s, size_t n)
 {
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
	
 }