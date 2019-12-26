/*
** EPITECH PROJECT, 2017
** map
** File description:
** coding
*/

#include "sokoban.h"

char	**othermap(char **map)
{
	char	**map2;
	int	i = 0;

	while (map[i] != NULL)
		i++;
	map2 = malloc(sizeof(*map2) * i);
	i = 0;
	while (map[i] != NULL)
	{
		map2[i] = my_strdup(map[i]);
		i++;
	}
	map2[i] = NULL;
	return (map2);
}
