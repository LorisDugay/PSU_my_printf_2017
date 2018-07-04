/*
** EPITECH PROJECT, 2017
** fonct3
** File description:
** made by Loris D
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"

void printp(va_list list)
{
	my_putstr("0x");
	my_put_nbr_base(va_arg(list, int), "0123456789abcdef");
}

void printb(va_list list)
{
	my_put_nbr_base(va_arg(list, int), "01");
}

void help_print_maj_s(int nb)
{
	if (nb < 8)
		my_putstr("00");
	else if (nb < 32)
		my_putstr("0");
}
