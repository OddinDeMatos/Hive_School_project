/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:33:27 by odde-mat          #+#    #+#             */
/*   Updated: 2020/10/14 15:53:46 by odde-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FdF.h"
#include <stdio.h>

/*int		ft_window(char **argv)
{
	void *mlx_ptr;
    void *win_ptr;
    char *ptr;
    int color;
    int y;
    int x;
	
	ptr = "FdF";
    color = 0X00ff00;
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, ptr);
    y = 250;
    x = 250;
    while (y < 300)
        mlx_pixel_put(mlx_ptr, win_ptr, x, y++, color);
    while (x < 300)
        mlx_pixel_put(mlx_ptr, win_ptr, x++, y, color);
    while (x < 350 && y < 350)
        mlx_pixel_put(mlx_ptr, win_ptr, x++, y++, color);
	while (x < 450 && y < 450)
        mlx_pixel_put(mlx_ptr, win_ptr, x++, y++, color);
	mlx_key_hook(win_ptr, esc_key, 0);
	mlx_hook(win_ptr, 17, 0, ft_exit, (void*)0);
    mlx_loop(mlx_ptr);
	return (0);
}
*/
int		main(int argc, char **argv)
{
	char	*line;
	int		ret;

	line = "\0";
	ret = 1;
	if (argc != 2)
		ft_putstr("Error\n");
	if (argc == 2)
	{
		ft_read_file(argv[1]);
	//	ft_window(argv);
	}
	return (0);

}