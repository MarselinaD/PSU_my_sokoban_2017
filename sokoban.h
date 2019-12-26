/*
** EPITECH PROJECT, 2017
** file
** File description:
** file
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int	my_strlen(char const *str);
char	*my_strdup(char const *str);
void	move_right(WINDOW *window, char **map, char **def, pos_t pos);
void	move_down(WINDOW *window, char **map, char **def, pos_t pos);
void	move_left(WINDOW *window, char **map, char **def, pos_t pos);
void	move_up(WINDOW *window, char **map, char **def, pos_t pos);
void	move_left_boxes(WINDOW *w, char **map, pos_t pos);
void	move_right_boxes(WINDOW *w, char **map, pos_t pos);
void	move_down_boxes(WINDOW *w, char **map, pos_t pos);
void	move_up_boxes(WINDOW *w, char **map, pos_t pos);
pos_t	get_pos(char **map);
char	**memory(char const *filename);
int	freemem(char **map);
char	**read_file(char **map, char const *filename);
int	count_line(char const *filename);
void	box_left(WINDOW *window, char **map, pos_t pos);
void	box_right(WINDOW *window, char **map, pos_t pos);
void	box_down(WINDOW *window, char **map, pos_t pos);
void	box_up(WINDOW *window, char **map, pos_t pos);
int	countplayer(char *line);
void	check_map(FILE *file);
int	correct_map(char *line);
map_t	**stock_map(char *buffer, int size);
char	**othermap(char **map);
int	check_for_player(char **map);
int	check_for_boxes(char **map);
int	check_for_invalid_char(char **map);
WINDOW	*initfunx(void);
int	drawmap(char **map, WINDOW *window);
char	**move_event(char **map, WINDOW *window);
int	finish_sokoban(char **map, char **def);

#endif
