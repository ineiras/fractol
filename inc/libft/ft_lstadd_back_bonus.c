/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:11:40 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:03:22 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(tl_list **lst, tl_list *newnode)
{
	tl_list	*save_node;

	if (*lst == NULL)
	{
		*lst = newnode;
		return ;
	}
	save_node = *lst;
	while ((*lst)-> next != NULL)
	{
		(*lst) = ((*lst)-> next);
	}
	(*lst)-> next = newnode;
	*lst = save_node;
}
