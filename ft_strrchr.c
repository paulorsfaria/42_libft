/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:24:29 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 15:15:51 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	
	i = ft_strlen(str);
	
	while (i >= 0)
	{
		if(str[i] == (char)c)
			return((char *)&str[i]);
		i--;
	}
	return('\0');
}