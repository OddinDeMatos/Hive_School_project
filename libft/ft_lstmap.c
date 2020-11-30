/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:15:23 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:38:38 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (!lst)
		return (NULL);
	head = f(lst);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (!(current = current->next))
			return (NULL);
	}
	return (head);
}
