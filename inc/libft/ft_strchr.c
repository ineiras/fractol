/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:11:42 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/02 14:09:15 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	c = (const char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		s++;
	}
	if (s[i] == c)
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	s[] = "Charmander";

	printf("Carecter devuelto:%s\n", ft_strchr(s, 'k'));
	printf("Direccion de memoria:%p\n", s);
	printf("Memory Dire from ret char:%p\n", ft_strchr(s, 'm'));
	return (0);
}
*/
