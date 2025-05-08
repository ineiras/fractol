/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:12:53 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/18 12:24:30 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*d1;
	size_t	i;

	s1 = (char *)src;
	d1 = (char *)dst;
	if ((!dst && !src) && n)
		return (NULL);
	i = 0;
	if (d1 > s1)
	{
		while (n-- > 0)
			d1[n] = s1[n];
	}
	else
	{
		while (i < n)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	return (dst);
}

/*
int main(void)
{
    char c[] = "Charmander";
    char p[] = "Charmander";

    printf("Antes de la funcion:\n%s, %p\n", c, &c);

    ft_memmove(c + 2, c, 7);

    printf("Despues de la funcion:\n%s, %p\n\n", c, &c);

    printf("Antes de la funcion real:\n%s, %p\n", p, &p);

    memmove(p + 2, p, 7);

    printf("Despues de la funcion real:\n%s, %p", p, &p);

    return 0;
}
*/
