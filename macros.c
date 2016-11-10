#include "stdio.h"

void main() {
	const volatile int i = 100;
	int* ptr;
	ptr = &i;
	printf("%d\n", i);
	*ptr = 200;
	printf("%d", i);
}
