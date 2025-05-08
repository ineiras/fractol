/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:10:07 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/02 14:27:20 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	c = (const char) c;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (i > 0)
	{
		if (s[i - 1] == c)
		{
			return ((char *) &s[i - 1]);
		}
		i--;
	}
	if (s[j] == c)
	{
		return ((char *) &s[j]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Charmander";

	printf("Carecter devuelto:%s\n", ft_strrchr(s, 'a'));
	printf("Direccion de memoria:%p\n", s);
	printf("Memory Dire from ret char:%p\n", ft_strrchr(s, 'a'));
	return (0);
}
*/
