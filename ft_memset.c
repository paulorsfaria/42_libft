/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:39:23 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/22 11:39:23 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *ptr, int value, size_t num)
{
	unsigned char	*val;
	val = ptr;
	while(num > 0)
	{
		*val++ = value;
		num--;
	}
	return (val);
}
