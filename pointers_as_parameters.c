#include "stdio.h"

void arthmatic();

int pointers_as_parameters_main() {

	int n = 10;
	int m = 20;
	printf("main() before swap() n=%d,m=%d\n", n, m);
	swapusingpointers(&n,&m);
	printf("main() after swap() n=%d,m=%d\n", n, m);

	return 0;
}

void swap(int n, int m) {
	int temp;
	temp = n;
	n = m;
	m = temp;
	printf("swap using pass by value n=%d,m=%d\n", n, m);
}

void swapusingpointers(int* n, int* m) {
	int temp;
	temp = *n;
	*n = *m;
	*m = temp;
	printf("swap using pass by reference/pointer n=%d,m=%d\n", *n, *m);
}
