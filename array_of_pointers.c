#include <stdio.h>
#include <stdarg.h>
#define ROWS 2
#define COLS 5
void set_value(int array[][5],int value);
void print_array(int array[][5]);

void main() {
	int array[ROWS][COLS] =
			{ { 10, 30, 20, 292, 22 },
			  { 10, 30, 20, 292, 22 }
			};
	int value = 100;
	set_value(array,value);
	print_array(array);

}

void set_value(int array[][5],int value) {
	int row = 0;
	int col = 0;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			*(*(array + row) + col) = 100;
		}
	}
}

void print_array(int array[][5]) {
	int row = 0;
	int col = 0;
	for (row = 0; row < ROWS; row++) {
		printf("\n");
		for (col = 0; col < COLS; col++) {
			printf(" %d", *(*(array + row) + col));
		}
	}
}
