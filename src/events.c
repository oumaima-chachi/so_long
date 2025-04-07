/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:31:35 by ochachi           #+#    #+#             */
/*   Updated: 2025/04/07 17:00:04 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	update_player_position(t_game *game, int new_x, int new_y)
{
	int	old_x;
	int	old_y;

	old_x = game->map->p_x;
	old_y = game->map->p_y;
	if (game->map->grid[new_y][new_x] == 'C')
	{
		game->map->c_count--;
	}
	if (old_x == game->map->e_x && old_y == game->map->e_y)
	{
		game->map->grid[old_y][old_x] = 'E';
	}
	else
	{
		game->map->grid[old_y][old_x] = '0';
	}
	game->map->grid[new_y][new_x] = 'P';
	game->map->p_x = new_x;
	game->map->p_y = new_y;
	game->moves++;
	ft_printf("moves: %d\n", game->moves);
	render_map(game);
}

static int	try_move(t_game *game, int new_x, int new_y)
{
	int	condition;

	condition = try_move_condition(game, new_x, new_y);
	if (condition == 0)
		return (0);
	else if (condition == 1)
		return (1);
	update_player_position(game, new_x, new_y);
	return (1);
}

int	handle_keypress(int keycode, t_game *game)
{
	if (keycode == 65307)
		close_game(game);
	else if (keycode == 119 || keycode == 65362)
		try_move(game, game->map->p_x, game->map->p_y - 1);
	else if (keycode == 115 || keycode == 65364)
		try_move(game, game->map->p_x, game->map->p_y + 1);
	else if (keycode == 97 || keycode == 65361)
		try_move(game, game->map->p_x - 1, game->map->p_y);
	else if (keycode == 100 || keycode == 65363)
		try_move(game, game->map->p_x + 1, game->map->p_y);
	return (0);
}

int	close_game(t_game *game)
{
	cleanup_game(game);
	exit(0);
}

void	setup_hooks(t_game *game)
{
	mlx_hook(game->win, 2, 1, handle_keypress, game);
	mlx_hook(game->win, 17, 0, close_game, game);
}
