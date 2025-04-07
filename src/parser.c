/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:32:14 by ochachi           #+#    #+#             */
/*   Updated: 2025/04/05 11:24:51 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**ft_append_tab(char **map, char *tmp)
{
	char	**new_map;
	int		i;
	int		j;

	i = 0;
	while (map && map[i])
		i++;
	new_map = malloc(sizeof(char *) * (i + 2));
	if (!new_map)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_map[j] = ft_strdup(map[j]);
		if (!new_map[j])
		{
			ft_free_tab(new_map);
			return (NULL);
		}
		j++;
	}
	new_map[j] = ft_strdup(tmp);
	new_map[j + 1] = NULL;
	ft_free_tab(map);
	return (new_map);
}

static int	ft_ber_file(char *filename)
{
	int	len;
	int	i;

	len = ft_strlen(filename);
	if (len < 5 || filename[len - 4] != '.' || filename[len - 3] != 'b'
		|| filename[len - 2] != 'e' || filename[len - 1] != 'r')
		return (0);
	i = 0;
	while (i < len - 4)
	{
		if (!ft_isalnum(filename[i]) && filename[i] != '_'
			&& filename[i] != '/')
			return (0);
		i++;
	}
	return (1);
}

char	**read_map(char *filename)
{
	int		fd;
	char	*line;
	char	**map;
	char	*tmp;

	if (!ft_ber_file(filename))
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	map = NULL;
	line = get_next_line(fd);
	while (line)
	{
		tmp = ft_strtrim(line, "\n");
		free(line);
		map = ft_append_tab(map, tmp);
		free(tmp);
		line = get_next_line(fd);
	}
	close(fd);
	return (map);
}
