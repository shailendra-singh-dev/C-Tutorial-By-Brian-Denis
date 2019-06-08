#include "stdio.h"

int console_io_operation_main() {
	read_chars_2();
	return 0;

}

void read_numbers() {
	printf("Enter first number:");
	float a, b;
	//	int a, b;
	float c;
	scanf("%10d", &a);
	printf("Enter second number:");
	scanf("%10d", &b);
	c = a + b;
	printf("Sum of %2.3f and %2.3f is %10f\n", a, b, c);
	//	printf("Sum of %10d and %10d is %10f", a, b, c);
}

void read_chars_1() {
	printf("Enter first char:");
	char c1, c2, c3;
	scanf("%c", &c1);
	scanf("%c", &c3);
	printf("Enter second char:");
	scanf("%c", &c2);
//	printf("%c %c", c1, c2);
	printf("%d %d", c1, c2);//ascii value of c1,c2
}

void read_chars_2() {
	printf("Enter characters:");
	char c1, c2;
	scanf("%c %c", &c1,&c2);
//	scanf("%c", &c2);
	printf("%d %d", c1, c2); //ascii value of space is 32,newline is 10
}
