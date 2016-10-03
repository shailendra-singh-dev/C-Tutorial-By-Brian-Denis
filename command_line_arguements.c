#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(int argc, char *argv[]) {
	printf("main() called with %d arguments..",argc);
	if (1 == argc) {
		printf("Enter at least one argument.");
		return 0;
	}
	int i = 0, sum =0;
	printf("--------");
	for (i = 1; i < argc; i++) {
		int num = atoi(argv[i]);
		sum +=  num;
	}
	printf("\nSum is :%d",sum);
	return 0;
}

