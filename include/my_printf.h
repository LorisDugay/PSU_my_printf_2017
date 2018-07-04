/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** made by Loris D
*/

#ifndef __my_printf_h__
#define __my_printf_h__
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef void (*ptrf) (va_list list);

typedef struct s_prt
{
	char c;
	ptrf fptr;
}t_prt;

void printd(va_list list);
void printi(va_list list);
void printc(va_list list);
void prinprtc(va_list list);
void printo(va_list list);
void printu(va_list list);
void printx(va_list list);
void print_maj_x(va_list list);
void prints(va_list list);
void print_maj_s(va_list list);
void printp(va_list list);
void printb(va_list list);
void help_print_maj_s(int nb);
void find_arg(char *str, t_prt *tab, va_list list, int *i);
void my_printf(char *str, ...);

#endif	/* __my_printf_h__ */
