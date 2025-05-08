/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:41:03 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/15 13:08:47 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ph;

	i = 0;
	while (i != n)
	{
		ph = *(unsigned char *) s;
		if (ph == (unsigned char) c)
		{
			return ((char *) s);
		}
		i++;
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	c[] = "Charmander";
	printf("%s\n", (char *)ft_memchr(c, '\0', 10));
	return (0);
}
*/
