#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int ROWS = 0;
int COLS = 0;

void method_1();
void method_2();
void method_3();
void method_4();

void main() {
	printf("Enter number of Rows");
	scanf("%d", &ROWS);
	printf("Enter number of Columns");
	scanf("%d", &COLS);
	method_4();
}

void method_4() {
	int **row_pointer;
	int *array_pointer;

	array_pointer = malloc(ROWS * COLS * sizeof(int));
	if (NULL == array_pointer) {
		printf("Unable to create pointer to whole array");
		exit(0);
	}

	row_pointer = malloc(ROWS * sizeof(int*));
	if (NULL == row_pointer) {
		printf("Unable to create pointer array to rows");
		exit(0);
	}

	printf("\n Index  Pointer(hex)  Pointer(dec)  Diff(dec)");

	int row = 0;
	for (row = 0; row < ROWS; row++) {
		row_pointer = array_pointer + (row * COLS);
	}

	printf("\n-----------Array------------");
	int value = 7899;
	set_array(row_pointer, value);
	print_array(row_pointer);
}

void method_3() {
	int **pointer_to_pointer;
	pointer_to_pointer = malloc(COLS * sizeof(int*));
	if (NULL == pointer_to_pointer) {
		printf("Unable to create pointer to array");
		exit(0);
	}
	printf("\n Index  Pointer(hex)  Pointer(dec)  Diff(dec)");

	int row = 0, col = 0;
	for (row = 0; row < ROWS; row++) {
		pointer_to_pointer[row] = malloc(ROWS * sizeof(int));
		if (NULL == pointer_to_pointer[row]) {
			printf("Unable to create pointer to array of index:%d", row);
			exit(0);
		}
		if (0 < row) {
			printf("\n %d     %p       %d        %d", row, pointer_to_pointer,
					pointer_to_pointer,
					(pointer_to_pointer[row] - pointer_to_pointer[row - 1]));
		}
	}

	printf("\n-----------Array------------");
	int value = 2221;
	set_array(pointer_to_pointer, value);
	print_array(pointer_to_pointer);
}

void method_1() {
	typedef int array[COLS];
	array *pointer_to_array;
	pointer_to_array = malloc(ROWS * COLS * sizeof(int));
	int value = 8888;
	set_array(pointer_to_array, value);
	print_array(pointer_to_array);
}

void method_2() {
	int (*pointer_to_array)[COLS];
	pointer_to_array = malloc(ROWS * COLS * sizeof(int));
	int value = 12000;
	set_array(pointer_to_array, value);
	print_array(pointer_to_array);
}

void set_array(int array[][COLS], int value) {
	int row = 0;
	int col = 0;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			*(*(array + row) + col) = value;
		}
	}
}

void print_array(int array[][COLS]) {
	int row = 0;
	int col = 0;
	for (row = 0; row < ROWS; row++) {
		printf("\n");
		for (col = 0; col < COLS; col++) {
			printf(" %d", *(*(array + row) + col));
		}
	}
}
