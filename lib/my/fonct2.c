/*
** EPITECH PROJECT, 2017
** fonct2
** File description:
** made by Loris D
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"

void printu (va_list list)
{
	int i = (va_arg(list, unsigned int));

	my_put_nbr(i);
}

void printx (va_list list)
{
	my_put_nbr_base(va_arg(list, int), "0123456789abcdef");
}

void print_maj_x (va_list list)
{
	my_put_nbr_base(va_arg(list, int), "0123456789ABCDEF");
}

void prints (va_list list)
{
	my_putstr(va_arg(list, char*));
}

void print_maj_s (va_list list)
{
	int nb;
	int i = 0;
	char *stock = (va_arg(list, char*));

	while (stock[i]) {
		nb = stock[i];
		if (nb < 32) {
			my_putstr("\\");
			help_print_maj_s(nb);
			my_put_nbr_base(nb, "01234567");
		}
		else if (nb >= 127) {
			my_putstr("\\");
			my_put_nbr_base(nb, "01234567");
		}
		else
			my_putchar(stock[i]);
		i++;
	}
}
