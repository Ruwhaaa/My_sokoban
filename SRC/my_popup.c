/*
** EPITECH PROJECT, 2017
** my_popup.c
** File description:
** popup window
*/

#include <stdio.h>
#include <ncurses.h>
#include "struct.h"

int my_popup(char *s)
{
	WINDOW *win;

	initscr();
	attron(A_BOLD);
	printw(s);
	attroff(A_BOLD);

	refresh();
	getch();
	endwin();
	return (0);
}

void erase_window()
{
}
