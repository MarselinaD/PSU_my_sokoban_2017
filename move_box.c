/*
** EPITECH PROJECT, 2017
** move
** File description:
** coding
*/

#include "my.h"
#include <curses.h>

void	move_up_boxes(WINDOW *w, char **map, pos_t pos)
{
	if (map[pos.y - 1][pos.x] == 'X' && map[pos.y - 2][pos.x] \
		!= '#') {
		map[pos.y - 1][pos.x] = 'P';
		map[pos.y][pos.x] = ' ';
		map[pos.y - 2][pos.x] = 'X';
		mvwaddch(w, pos.y - 1, pos.x, map[pos.y -1][pos.x]);
		mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		mvwaddch(w, pos.y - 2, pos.x, map[pos.y - 2][pos.x]);
	}
}

void	move_down_boxes(WINDOW *w, char **map, pos_t pos)
{
	if (map[pos.y + 1][pos.x] == 'X' && map[pos.y + 2][pos.x] \
		!= '#') {
		map[pos.y + 1][pos.x] = 'P';
		map[pos.y][pos.x] = ' ';
		map[pos.y + 2][pos.x] = 'X';
		mvwaddch(w, pos.y + 1, pos.x, map[pos.y +1][pos.x]);
		mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		mvwaddch(w, pos.y + 2, pos.x, map[pos.y + 2][pos.x]);
	}
}

void	move_right_boxes(WINDOW *w, char **map, pos_t pos)
{
	if (map[pos.y][pos.x + 1] == 'X' && map[pos.y][pos.x + 2] \
		!= '#') {
		map[pos.y][pos.x + 1] = 'P';
		map[pos.y][pos.x] = ' ';
		map[pos.y][pos.x + 2] = 'X';
		mvwaddch(w, pos.y, pos.x + 1, map[pos.y][pos.x + 1]);
		mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		mvwaddch(w, pos.y, pos.x + 2, map[pos.y][pos.x + 2]);
	}
}

void	move_left_boxes(WINDOW *w, char **map, pos_t pos)
{
	if (map[pos.y][pos.x - 1] == 'X' && map[pos.y][pos.x - 2] \
		!= '#') {
		map[pos.y][pos.x - 1] = 'P';
		map[pos.y][pos.x] = ' ';
		map[pos.y][pos.x - 2] = 'X';
		mvwaddch(w, pos.y, pos.x - 1, map[pos.y][pos.x - 1]);
		mvwaddch(w, pos.y, pos.x, map[pos.y][pos.x]);
		mvwaddch(w, pos.y, pos.x - 2, map[pos.y][pos.x - 2]);
	}
}
