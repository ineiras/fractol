/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:30:47 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/15 11:59:23 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;	

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
	{
		return (NULL);
	}
	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
	{
		free (ptr);
		return (NULL);
	}
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	ft_calloc(7,7);
	return (0);
}
*/
