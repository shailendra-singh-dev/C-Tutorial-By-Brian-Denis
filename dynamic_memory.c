#include <stdio.h>
#include "dynamic_memory.h"

int* get_pointer_address() {
	int *pn;
	pn = (int*) malloc(sizeof(int));
	return pn;
}

void dynamic_memory_main() {
	int* pn = get_pointer_address();
	free(pn);
}

void malloc_usage() {
	int len = 0, i, sum = 0;
	printf("Enter number of elements");
	scanf("%d", &len);
	int *par;
	par = (int*) malloc(sizeof(int) * len);
	for (i = 0; i < len; i++) {
		printf("Enter number");
		scanf("%d", par + i);
	}
	for (i = 0; i < len; i++) {
		sum += *(par + i);
	}
	printf("Sum is %d", sum);
	free(par);
}
