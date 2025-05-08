/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:10:20 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:04:44 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

tl_list	*ft_lstlast(tl_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst -> next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
