/*
 ============================================================================
 Name        : c_tutorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int add_using_recursion(int num1, int num2);
int add_using_loop(int num1, int num2);

int sum(int num1, int num2) {
	if (num1 <= 0 || num2 <= 0 || (num1 <= 0 && num2 <= 0)) {
		return -1;
	}
	return printf("%*c%*c", num1, ' ', num2, ' ');
}

int addition_main(int argc, char *args[]) {
	printf("boolean:%d", !10);
	return 0;
}

//Addition using recursion
int add_using_recursion(int num1, int num2) {
	printf("num1:%d\n", num1);
	if (!num1)
		return num2;
	else
		return add_using_recursion((num1 & num2) << 1, num1 ^ num2);
}

//Addition using loop
int add_using_loop(int num1, int num2) {
	while (num2--) {
		num1++;
	}
	return num1;
}

