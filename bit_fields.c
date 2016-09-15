#include "stdio.h"

struct 	Employee1 {
	int roll_number;
} emp1;

struct Employee2 {
	int roll_number :32;

} emp2;

void main() {
	printf("size of emp1.roll_number:%d\n", sizeof(emp1));
	printf("size of emp2.roll_number:%d", sizeof(emp2));
}
