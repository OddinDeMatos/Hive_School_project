/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:36:28 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:43:20 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		word;
	char	**dest;
	int		count;
	int		i;

	i = 0;
	count = ft_wordcount((char*)s, c);
	word = ft_length_words((char*)s, c);
	if (!(dest = (char**)malloc(sizeof(s) * (count + 1))))
		return (NULL);
	while (count > 0)
	{
		while (*s == c)
			s++;
		word = ft_length_words((char*)s, c);
		dest[i] = ft_strsub(s, 0, word);
		i++;
		s += word;
		count--;
	}
	dest[i] = 0;
	return (dest);
}
