/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct
*/

#include <dirent.h>

#ifndef LIST_H_
#define LIST_H_

int my_putstr(char const *str);
void my_putchar(char c);
void display_nbr(int n, int b, int nb);
char *my_revstr(char *);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void number(int nb, char *str);
int decimal_nbr(char *str);
int my_popup(char *s);
void erase_window();

#endif /* !LIST_H_ */
