#include <stdio.h>
#include <stdarg.h>
#define SIZE 10

void pointer_dynamic_allocations_main() {
	int *array;
	array = malloc(SIZE * sizeof(int));
	int value = 8888;
	pointer_dynamic_allocations_set_array(array, value);
	pointer_dynamic_allocations_print_array(array);
}

void pointer_dynamic_allocations_set_array(int array[], int value) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		*array = value;
	}
}

void pointer_dynamic_allocations_print_array(int array[], int value) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf(" %d", *array);
	}
}
