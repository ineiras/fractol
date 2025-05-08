/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:52:26 by ineiras-          #+#    #+#             */
/*   Updated: 2024/12/28 14:39:12 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	j = 0;
	len_dest = 0;
	len_src = 0;
	while (dst[len_dest] != '\0' && len_dest < size)
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (len_dest >= size)
		return (size + len_src);
	i = len_dest;
	while ((src[j] != '\0') && ((i + 1) < size))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
/*
int	main(void)
{
	char	c[] = "Piplup";
	char	p[10] = "Titulo";
	
	printf("%zu\n",ft_strlcat(p, c, 10));
	printf("%s\n", p);
	return (0);
}
*/
