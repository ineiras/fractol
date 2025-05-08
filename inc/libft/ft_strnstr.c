/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:18:16 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/03 13:09:08 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
	{
		return ((char *) &big[i]);
	}
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *) &big[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	c[] = "Foo B Ba Bar Bar Baz";
	char	h[] = "Bar";

	printf("%s\n", ft_strnstr(c, h, 12));
	return (0);
}
*/
