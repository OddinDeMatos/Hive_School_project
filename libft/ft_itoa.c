/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:51:57 by odde-mat          #+#    #+#             */
/*   Updated: 2020/07/24 10:37:58 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	str[len--] = '\0';
	while (n > 0)
	{
		str[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
