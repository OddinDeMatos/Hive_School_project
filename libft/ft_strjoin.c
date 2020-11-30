/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:32:48 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:42:14 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s3 = (char *)malloc(sizeof(char) * (i))))
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
		while (s1[j] != '\0')
			s3[i++] = s1[j++];
	j = 0;
	if (s2)
		while (s2[j] != '\0')
			s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
