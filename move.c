/*
** EPITECH PROJECT, 2017
** move
** File description:
** coding
*/

#include "sokoban.h"
#include "my.h"

void	move_up(WINDOW *w, char **map, char **def, pos_t pos)
{
	if (map[pos.y - 1][pos.x] != '#' && pos.y - 1 != 0) {
		if (map[pos.y - 1][pos.x] == ' ') {
			map[pos.y - 1][pos.x] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y - 1, pos.x, map[pos.y - 1][pos.x]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else if (map[pos.y - 1][pos.x] == 'O') {
			map[pos.y - 1][pos.x] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y - 1, pos.x, map[pos.y - 1][pos.x]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else
			move_up_boxes(w, map, pos);
		if (def[pos.y][pos.x] == 'O') {
			map[pos.y][pos.x] = 'O';
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
	}
}

void	move_down(WINDOW *w, char **map, char **def, pos_t pos)
{
	if (map[pos.y + 1][pos.x] != '#') {
		if (map[pos.y + 1][pos.x] == ' ') {
			map[pos.y + 1][pos.x] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y + 1, pos.x, map[pos.y + 1][pos.x]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else if (map[pos.y + 1][pos.x] == 'O') {
			map[pos.y + 1][pos.x] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y + 1, pos.x, map[pos.y + 1][pos.x]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else
			move_down_boxes(w, map, pos);
		if (def[pos.y][pos.x] == 'O') {
			map[pos.y][pos.x] = 'O';
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
	}
}

void	move_right(WINDOW *w, char **map, char **def, pos_t pos)
{
	if (map[pos.y][pos.x + 1] != '#') {
		if (map[pos.y][pos.x + 1] == ' ') {
			map[pos.y][pos.x + 1] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y, pos.x + 1, map[pos.y][pos.x + 1]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else if (map[pos.y][pos.x + 1] == 'O') {
			map[pos.y][pos.x + 1] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y, pos.x + 1, map[pos.y][pos.x + 1]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else
			move_right_boxes(w, map, pos);
		if (def[pos.y][pos.x] == 'O') {
			map[pos.y][pos.x] = 'O';
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
	}
}

void	move_left(WINDOW *w, char **map, char **def, pos_t pos)
{
	if (map[pos.y][pos.x - 1] != '#') {
		if (map[pos.y][pos.x - 1] == ' ') {
			map[pos.y][pos.x - 1] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y, pos.x - 1, map[pos.y][pos.x - 1]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else if (map[pos.y][pos.x - 1] == 'O') {
			map[pos.y][pos.x - 1] = map[pos.y][pos.x];
			map[pos.y][pos.x] = ' ';
			mvwaddch(w, pos.y, pos.x - 1, map[pos.y][pos.x - 1]);
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
		else
			move_left_boxes(w, map, pos);
		if (def[pos.y][pos.x] == 'O') {
			map[pos.y][pos.x] = 'O';
			mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		}
	}
}
