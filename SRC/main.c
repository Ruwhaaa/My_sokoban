/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "struct.h"

int main(int argc, char **argv)
{
	char *s;
	
	if (argc == 2) {
		s = argv[1];
		my_popup(s);
	}
	if (argc < 2) {
		my_putstr("Not enought argument\n");
		return (84);
	}
	if (argc > 2) {
		my_putstr("Too many argument\n");
		return (84);
	}
	return (0);
}
