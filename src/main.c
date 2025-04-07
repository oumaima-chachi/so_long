/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:31:52 by ochachi           #+#    #+#             */
/*   Updated: 2025/04/07 16:56:41 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		ft_putstr_fd("nononoono: ./so_long maps/map.ber\n", 2);
		return (1);
	}
	ft_memset(&game, 0, sizeof(t_game));
	if (!init_game(&game, argv[1]))
	{
		return (1);
	}
	setup_hooks(&game);
	mlx_loop(game.mlx);
}
