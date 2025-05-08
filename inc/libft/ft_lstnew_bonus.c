/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:20:55 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:05:33 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

tl_list	*ft_lstnew(void *content)
{
	tl_list	*newnode;

	newnode = (tl_list *) malloc(sizeof(tl_list));
	if (newnode == NULL)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}

/*
int	main(void)
{
	char	c[] = "Charmander";

	t_list *new_node = ft_lstnew(c);
	printf("%s\n", (char *)new_node->content);
	return(0);
}*/
