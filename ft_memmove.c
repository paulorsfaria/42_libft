/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:43:27 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 15:11:16 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desteny;
	const unsigned char	*source;

	desteny = (unsigned char *) dest;
	source = (const unsigned char *) src;

	if (desteny == source)
	{
		return (dest);	
	}
	if(desteny < source )
	
	
	}