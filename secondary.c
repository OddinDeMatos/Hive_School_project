/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:10:41 by odde-mat          #+#    #+#             */
/*   Updated: 2020/10/13 13:25:48 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FdF.h"

int		ft_exit(void)
{
	exit(0);
}

int		esc_key(int key, void *param)
{
	char *ptr;

	ptr = param;
	if (key == ESC_KEY)
		exit (0);
	ft_putnbr(key);
	ft_putchar('\n');
	return (0);
}
