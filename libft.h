/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:21:31 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/21 11:21:31 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

/*Imaginary struct that makes code work*/
/*https://tenor.com/view/spongebob-magic-gif-18115910*/
/*maaaaaaaaaaaaaaaaaaaaaaaaaaaaagggggggggggiiiiiiiccc*/


int	atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int	ft_tolower(int c);
int ft_tolower(int c);
void 	*memset(void *ptr, int value, size_t num);
#endif