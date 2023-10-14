/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:50 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/14 21:51:53 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t word_count(char const *str, char c)
{
	size_t	i = 0;
	size_t	word = 0;
	
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}

	return (word);

}

static size_t count_letters(char const *s, char c, size_t i)
{
	size_t	size;
	
	size = i;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return(i - size);
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * ((word_count(s, c)) + 1));
	if (!split)
		return (NULL);
	while (s[i] != '\0')
	{
		if(s[i] !=c)
		{		split[j] = ft_substr(s, i, count_letters(s, c, i));
				i = i + count_letters(s, c, i);
				j++;
		}
		while (s[i] == c)
		{
			i++;
			if (s[i] != c)
			{
				split[j] = ft_substr(s, i, count_letters(s, c, i));
				i = i + count_letters(s, c, i);
				j++;
			}
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
