/*
** EPITECH PROJECT, 2018
** check
** File description:
** coding
*/

#include "sokoban.h"

int	check_for_invalid_char(char **map)
{
	for (int y = 0; map[y]; y++) {
		for (int x = 0; map[y][x] != '\0'; x++) {
			if (map[y][x] != 'P' && map[y][x] != ' ' && map[y][x] \
				!= '#' && map[y][x] != 'O' && map[y][x] != 'X' \
				&& map[y][x] != '\n')
				return (84);
		}
	}
	return (0);
}

int	check_for_player(char **map)
{
	int	count = 0;

	for (int y = 0; map[y]; y++) {
		for (int x = 0; map[y][x] != '\0'; x++) {
			if (map[y][x] == 'P')
				count++;
		}
	}
	if (count > 1)
		return (84);
	else
		return (0);
}

int	check_for_boxes(char **map)
{
	int	count_box = 0;
	int	count_place = 0;

	for (int y = 0; map[y]; y++) {
		for (int x = 0; map[y][x] != '\0'; x++) {
			if (map[y][x] == 'X')
				count_box++;
			if (map[y][x] == 'O')
				count_place++;
		}
	}
	if (count_box != count_place)
		return (84);
	else
		return (0);
}
