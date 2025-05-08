/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:44:21 by ineiras-          #+#    #+#             */
/*   Updated: 2024/12/26 14:07:22 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int arg)
{
	if (ft_isalpha(arg) || ft_isdigit(arg))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('5'));
	printf("%d\n",ft_isalnum('}'));
	return (0);
}
*/
