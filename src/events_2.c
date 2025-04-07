/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:31:27 by ochachi           #+#    #+#             */
/*   Updated: 2025/04/07 16:36:21 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	try_move_condition(t_game *game, int new_x, int new_y)
{
	if (game->map->grid[new_y][new_x] == '1')
		return (0);
	if (game->map->grid[new_y][new_x] == 'E')
	{
		if (game->map->c_count == 0)
		{
			game->moves++;
			ft_printf("moves: %d\n", game->moves);
			ft_putstr_fd("Congratulations! You won!\n", 1);
			close_game(game);
			return (1);
		}
		return (2);
	}
	return (2);
}
