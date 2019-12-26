/*
** EPITECH PROJECT, 2018
** finish
** File description:
** coding
*/

#include "sokoban.h"
#include "my.h"

int	count_places(char **map)
{
	int	count = 0;

	for (int y = 0; map[y]; y++) {
		for (int x = 0; map[y][x] != '\0'; x++) {
			if (map[y][x] == 'O')
				count++;
		}
	}
	return (count);
}

int	finish_sokoban(char **map, char **def)
{
	int	count = 0;
	int	places = 0;

	places = count_places(def);
	for (int y = 0; map[y]; y++) {
		for (int x = 0; map[y][x] != '\0'; x++) {
			if (def[y][x] == 'O' && map[y][x] == 'X')
				count++;
		}
	}
	if (places == count)
		return (1);
	else
		return (0);
}
