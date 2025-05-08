/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:30:38 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/15 15:31:43 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_malloc(const char *s, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	ft_cut_number(char const *s, char c)
{
	int	i;
	int	matches;

	i = 0;
	matches = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			matches++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (matches);
}

static	void	ft_free(char	**ptr, int j)
{
	if ((ptr)[j] == NULL)
	{
		while (j > 0)
			free(ptr[--j]);
		free(ptr);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	ptr = (char **) malloc((ft_cut_number(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			ptr[j] = ft_malloc(s + i, ft_size(s + i, c));
			ft_free(ptr, j);
			j++;
			i += ft_size(s + i, c);
		}
		else
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char	c[] = "Piplup";
	char	**result;
	int		i;

	i = 0;
	result = ft_split(c, 'p');
	while (result[i] != NULL )
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/
