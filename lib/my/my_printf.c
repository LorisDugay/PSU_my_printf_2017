/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** made by Loris D
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"

void find_arg (char *str, t_prt *tab, va_list list, int *i)
{
	int j = 0;

	*i = *i + 1;
	while (j < 12 && str[*i] != tab[j].c)
		j = j + 1;
	if (str[*i] == tab[j].c)
		tab[j].fptr(list);
	else {
		my_putchar('%');
		my_putchar(str[*i]);
	}
}

void my_printf (char *str, ...)
{
	va_list list;

	t_prt tab[12] = {{'d', printd}, {'i', printi}, {'b', printb},
			{'c', printc}, {'%', prinprtc}, {'o', printo},
			{'u', printu}, {'x', printx}, {'X', print_maj_x},
			{'s', prints}, {'S', print_maj_s}, {'p', printp}};
	int i = 0;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%')
			find_arg(str, tab, list, &i);
		else
			my_putchar(str[i]);
		i = i + 1;
	}
	va_end (list);
}
