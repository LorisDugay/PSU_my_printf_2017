/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** fonction my_put_nbr
*/

//#include <unistd.h>
#include "../../include/my.h"

int my_put_nbr_base(int nb, char *base)
{
	int size = my_strlen(base);
	int reste = 0;

	if (nb == -2147483648) {
		write(1, "error invalid size of number\n", 29);
		return (0);
	}
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	reste = nb % size;
	nb = nb / size;

	if (nb > 0)
		my_put_nbr_base(nb, base);
	my_putchar(base[reste]);
	return (nb);
}
