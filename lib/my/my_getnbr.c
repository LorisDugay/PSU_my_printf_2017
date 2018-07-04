/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** fonction my_getnbr
*/

#include "../../include/my.h"

int norme1 (char const *str)
{
	int i = 0;
	int nega = 1;

	while (str[i] == '+' && str[i] == '-') {
		if (str[i] == '-')
			nega = nega * 1;
		i++;
	}
	return (0);
}

int my_getnbr (char const *str)
{
	int nb = 0;
	int i = 0;
	int nega = 1;

	while (str[i]) {
		norme1(str);
		while (str[i] >= '0' && str[i] <= '9') {
			nb = nb * 10;
			nb = nb + (str[i] - '0');
			i++;
		}
		nb = nb * nega;
	}
	return (nb);
}
