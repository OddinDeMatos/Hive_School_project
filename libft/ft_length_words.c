/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:05:33 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:38:00 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_length_words(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}
