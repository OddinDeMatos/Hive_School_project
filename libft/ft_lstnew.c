/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:34:50 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:38:44 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	if (!(newlist = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = malloc(content_size);
		if (!(newlist->content))
		{
			free(newlist);
			return (NULL);
		}
		ft_memcpy(newlist->content, content, content_size);
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}
