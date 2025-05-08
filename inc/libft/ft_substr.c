/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:01:08 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/18 11:46:50 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;

	if (ft_strlen(s) < start)
	{
		start = 0;
		len = 0;
	}
	if (ft_strlen(s + start) < len)
	{
		len = ft_strlen(s + start);
	}
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*
int	main(void)
{
	char	c[] = "Serperior";

	printf("%s\n", ft_substr(c, 3, 2));
	return (0);
}
*/
