/*
** EPITECH PROJECT, 2017
** fonct_print
** File description:
** made by Loris D
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"

void printd (va_list list)
{
	my_put_nbr(va_arg(list, int));
}

void printi (va_list list)
{
	int i = (va_arg(list, int));

	my_put_nbr(i);
}

void printc (va_list list)
{
	my_putchar(va_arg(list, int));
}

void prinprtc (va_list list)
{
	my_putchar('%');
}

void printo (va_list list)
{
	my_put_nbr_base(va_arg(list, int), "01234567");
}
