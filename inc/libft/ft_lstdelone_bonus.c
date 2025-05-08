/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:32:44 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:04:10 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(tl_list *lst, void (*del)(void*))
{
	if ((lst == NULL) | (del == NULL))
		return ;
	del(lst -> content);
	free(lst);
}
