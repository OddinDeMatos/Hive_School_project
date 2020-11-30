/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:14:00 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:42:59 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (s1[i] != s2[i] && n)
		return (0);
	return (1);
}