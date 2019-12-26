/*
** EPITECH PROJECT, 2018
** main
** File description:
** coding
*/

#include "sokoban.h"
#include "my.h"

void	usage(void)
{
	write(1, "USAGE\n", 6);
	write(1, "\t./my_sokoban map\n", 18);
	write(1, "DESCRIPTION\n", 12);
	write(1, "\tmap file representing the warehouse map, containing", 52);
	write(1, " '#' for walls,\n\t'P' for the player, 'X' for boxes", 50);
	write(1, " and 'O' for storage locations.\n", 32);
}

int	main(int ac, char **av)
{
	WINDOW	*window;
	char	**map;

	if (ac == 1)
		exit(84);
	else if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h')
			usage();
		else {
			map = memory(av[1]);
			if (check_for_invalid_char(map) == 84 || \
				check_for_player(map) == 84 || \
				check_for_boxes(map) == 84)
				exit(84);
			else {
				window = initfunx();
				drawmap(map, window);
				map = move_event(map,  window);
				endwin();
			}
		}
	}
	return (0);
}
