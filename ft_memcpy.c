/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:07:54 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 16:15:49 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*desteny;
	const unsigned char	*source;

	desteny = (unsigned char *) dest;
	source = (const unsigned char *) src;
	while (*source != '\0' && n > 0)
	{
		*desteny = *source;
		desteny++;
		source++;
		n--;
	}
	*desteny = '\0';
	return (dest);
}
