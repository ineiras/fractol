/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:11:04 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:03:36 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(tl_list **lst, tl_list *newnode)
{
	if (lst == NULL || newnode == NULL)
		return ;
	newnode -> next = *lst;
	*lst = newnode;
}
