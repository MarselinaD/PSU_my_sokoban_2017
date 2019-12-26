/*
** EPITECH PROJECT, 2017
** strdup
** File description:
** file
*/

#include "sokoban.h"
#include "my.h"

char	*my_strdup(char const *str)
{
	int	i = 0;
	char	*string;

	string = malloc(sizeof(*string) * my_strlen(str));
	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
