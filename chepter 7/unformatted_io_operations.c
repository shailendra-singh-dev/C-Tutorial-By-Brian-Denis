#include "stdio.h"

int unformatted_io_operations_main() {
	get_char();
	return 0;
}

void get_char() {
	char ch;
	ch = getchar();
	printf("Entered character is %c\n", ch);
}
