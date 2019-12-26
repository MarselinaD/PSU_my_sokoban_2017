/*
** EPITECH PROJECT, 2018
** prove
** File description:
** coding
*/

#include "my.h"
#include "sokoban.h"

WINDOW	*initfunx(void)
{
	WINDOW	*window;

	window = initscr();
	noecho();
	curs_set(false);
	keypad(window, true);
	return (window);
}

int	drawmap(char **map, WINDOW *window)
{
	int	i = 0;
	int	j = 0;

	while (map[i]) {
		j = 0;
		while (map[i][j] != '\0') {
			mvwaddch(window, i, j, map[i][j]);
			j++;
		}
		i++;
	}
	refresh();
	return (0);
}

void	manage_keys(char **map, char **map2, WINDOW *window, int key)
{
	pos_t	pos;

	if (key == KEY_DOWN){
		pos = get_pos(map);
		move_down(window, map, map2, pos);
	}
	else if (key == KEY_RIGHT){
		pos = get_pos(map);
		move_right(window, map, map2, pos);
	}
	else {
		if (key == KEY_LEFT){
			pos = get_pos(map);
			move_left(window, map, map2, pos);
		}
	}
}

char	**move_event(char **map,  WINDOW *window)
{
	int	key;
	pos_t	pos;
	char	**map2;

	map2 = othermap(map);
	while (finish_sokoban(map, map2) == 0) {
		key = getch();
		if (key == KEY_UP){
			pos = get_pos(map);
			move_up(window, map, map2, pos);
		}
		else if (key == 32) {
			map = map2;
			drawmap(map, window);
			move_event(map, window);
		}
		else
			manage_keys(map, map2, window, key);
	}
	return (map);
}
