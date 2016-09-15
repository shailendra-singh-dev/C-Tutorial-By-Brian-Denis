#include <stdio.h>
#include <stdarg.h>
#define SIZE 10

void main() {
	int *array;
	array = malloc(SIZE * sizeof(int));
	int value = 8888;
	set_array(array, value);
	print_array(array);
}

void set_array(int array[], int value) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		*array = value;
	}
}

void print_array(int array[], int value) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf(" %d", *array);
	}
}
