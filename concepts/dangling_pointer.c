#include <stdio.h>

void dangling_pointer_main() {
//	v1();
	v2();
}

void v1() {
	int* ptr = (int*) malloc(sizeof(int));

	int x = 100;
	ptr = &x;
	free(ptr); //Now it's dangling pointer
	int y = 200;
	ptr = &y;

	printf("Value at pointer=%d", *ptr);
}

void v2() {
	int* ptr = NULL;
	int x = 10;
	ptr = &x;
	free(ptr);
	{
		int y = 20;
		ptr = &y;
	}
	printf("\nValue at pointer=%d", *ptr);
}

