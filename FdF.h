/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:56:36 by odde-mat          #+#    #+#             */
/*   Updated: 2020/10/14 14:04:46 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FDF_H
# ifdef FDF_H
# include "libft/libft.h"
# include "mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# define ESC_KEY				53

int		ft_exit(void);
int		esc_key(int key, void *param);
int		ft_read_file(char *file);


#endif