/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:18:22 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/18 14:31:48 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	ptr = (char *) malloc(sizeof(char) * end - start + 2);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], end - start + 2);
	return (ptr);
}
/*
int	main(void)
{
	const char	c1[] = "Charmander";
	const char	c2[] = "h";
	
	printf("%d\n", ft_esizeof(c1,c2));
	printf("%d\n", ft_sizeof(c1));
	printf("%s\n", ft_strtrim(c1,c2));
	return (0);
}
*/
