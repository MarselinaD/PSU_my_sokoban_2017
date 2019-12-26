/*
** EPITECH PROJECT, 2017
** get_pos
** File description:
** coding
*/

#include "sokoban.h"
#include "my.h"

pos_t	get_pos(char **map)
{
	int	x = 0;
	int	y = 0;
	pos_t	pos;

	while (map[y])
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P')
			{
				pos.x = x;
				pos.y = y;
			}
			x++;
		}
		y++;
	}
	return (pos);
}
