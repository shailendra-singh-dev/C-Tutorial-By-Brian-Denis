#include "stdio.h"

int main() {
	get_char();
	return 0;
}

void get_char() {
	char ch;
	ch = getchar();
	printf("Entered character is %c\n", ch);
}
