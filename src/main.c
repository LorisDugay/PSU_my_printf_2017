/*
** EPITECH PROJECT, 2017
** main
** File description:
** made by Loris D
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

int main(void)
{
	char a = 14;
	char b[3] = "aha";
	float N = 12.1234;
	my_printf("-------Easy TESTS--------\n");
	my_printf("TEST 1\n");
	my_printf("TEST 2 : %c \n", 'l');
	my_printf("TEST 3 : %s \n", "ok");
	my_printf("TEST 4 : %d \n", 42);
	my_printf("TEST 5 : %S \n", "OK ? \t");
	my_printf("TEST 6 : %b\n", 42);
	my_printf("TEST 7 : %x\n", 23456);
	my_printf("TEST 8 : %X\n", 32);
	my_printf("TEST 9 : %p\n", 23456);
	my_printf("TEST A : %%\n");
	my_printf("TEST B : %o\n", 42);
	my_printf("TEST BINAIRE : %b\n", "TRISO\t\b 7");
	my_printf("TEST U : %u\n", 23);
	my_printf("TEST F : %f\n", N);
	printf("-------Easy TESTS_print_base--------\n");
	printf("TEST 1\n");
	printf("TEST 2 : %c \n", 'l');
	printf("TEST 3 : %s \n", "ok");
	printf("TEST 4 : %3d \n", 342);
//	printf("TEST 5 : %S \n", "OK ? \t");
	printf("TEST 6 : %b\n", 42);
	printf("TEST 7 : %x\n", 23456);
	printf("TEST 8 : %X\n", 8);
	printf("TEST 9 : %p\n", 23456);
	printf("TEST A : %%\n");
	printf("TEST B : %o\n", 42);
	printf("TEST U : %u\n", 23);
	printf("TEST LD : %ld\n", 1555);
	printf("TEST F : %f\n", N);
	printf("TEST LF : %lf\n", N);
	printf("TEST SHORT : %hd\n", 23);

	
//	my_printf("-------Medium TESTS-------\n");
//	my_printf("TEST B : %d%d\n", 42, 69);
//	my_printf("TEST C : %d%s%c\n", 69, "is ok ?", 'y');
//	my_printf("TEST D : \" %p %%%%%x\n", &a, 6996);
//	my_printf("TEST E : %S%s%s\n", "IS\t\a\b", "IT ?", "OK??");
//	my_printf("TEST F : %%%d%%%s%%%p%%%i%%%s\n", 42, "try", &a, 69,"mybe");
	my_printf("-------TORTURE------------\n");
	my_printf("TORTURE 1 : %a\n", 36, 2, 7, 4);
	my_printf("TORTURE 2 : %d %d %d %d %d %d %d %d\n", 36, 2, 7, 4);
	my_printf("TORTURE 3 : %%%%%%%%%%%%%%%%%% \t\b 1\n", 36, 2, 7, 4);
	my_printf("TORTURE 4 : %s\n", b);
	my_printf("TORTURE 5 : %c %s %d %S %b %x %X %p %% %o %u \n", 'x', "lolilol", 69, "TRISO\t\b 7", 42, 32, 64, &a, 32, 123);
	my_printf("TORTURE 6 : azert%vzert\n", a);
	my_printf("------TORTURE_print_base-------\n");
	printf("TORTURE 1 : %a\n", 36, 2, 7, 4);
	printf("TORTURE 2 : %d %d %d %d %d %d %d %d\n", 36, 2, 7, 4);
	printf("TORTURE 3 : %%%%%%%%%%%%%%%%%% \t\b 1\n", 36, 2, 7, 4);
	printf("TORTURE 4 : %s\n", b);
	printf("TORTURE 5 : %c %s %d %x %X %p %% %o %u %d \n", 'x', "lolilol", 69, "TRISO\t\b 7", 42, 32, 64, &a, 32, -7);
	printf("TORTURE 6 : azert%vzert\n", a);
	
	return (0);
}
