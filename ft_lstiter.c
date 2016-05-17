/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 10:35:22 by simzam            #+#    #+#             */
/*   Updated: 2016/05/17 23:46:47 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates the list "lst" and applies the function f to each link. */

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*new_list;

	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
