/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:38:18 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:43:41 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s2;
	int		i;
	int		n;
	int		w;
	int		m;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	n = ft_strlen(s);
	while ((s[n - 1] == ' ' || s[n - 1] == '\n' || s[n - 1] == '\t') && n != i)
		n--;
	if (!(s2 = (char*)malloc(sizeof(*s2) * (n - i + 1))))
		return (NULL);
	m = n - i;
	w = m;
	while (n >= i)
		s2[m--] = s[n--];
	s2[w] = '\0';
	return (s2);
}
