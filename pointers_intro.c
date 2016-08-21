#include "stdio.h"

void initialization();

int main() {
	initialization();
	return 0;
}

void initialization() {
	int n = 10;
	int *pn;
	pn = &n;
	printf("Memory location name=%d\n", n);
	printf("Memory location address=%d\n", pn);
	*pn = *pn * *pn;
	printf("Memory location name=%d\n", n);
	printf("Memory location name=%d\n", *pn);
}

