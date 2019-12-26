/*
** EPITECH PROJECT, 2017
** read
** File description:
** coding
*/

#include "sokoban.h"
#include "my.h"

int	count_line(char const *filename)
{
	FILE	*file;
	char	*line;
	int	nbline = 0;
	size_t	len = 0;
	size_t	read;

	file = fopen(filename, "r");
	if (file == NULL)
		exit(84);
	while ((read = getline(&line, &len, file) != -1))
		nbline++;
	free(line);
	fclose(file);
	return (nbline);
}
char	**read_file(char **map, char const *filename)
{
	int	i = 0;
	FILE	*file;
	char	*line;
	size_t	len = 0;
	size_t	read;

	file = fopen(filename, "r");
	if (file == NULL)
		return (NULL);
	while ((read = getline(&line, &len, file) != -1))
	{
		map[i] = my_strdup(line);
		i++;
	}
	map[i] = NULL;
	free(line);
	fclose(file);
	return (map);
}

char	**memory(char const *filename)
{
	int	size;
	char	**map;

	size = count_line(filename);
	map = malloc(sizeof(*map) * (size + 1));
	map = read_file(map, filename);
	return (map);
}
