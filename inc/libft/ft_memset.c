/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:36:03 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/15 13:07:24 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[] = "Charmander is a great Pokemon";
	
	printf("Before memset:\n%s\n", c);
	ft_memset(c, 'k', 7);
	printf("%s\n", c);
	return (0);
}
*/
