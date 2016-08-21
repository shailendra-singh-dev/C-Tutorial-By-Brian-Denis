#include "calc.h"
#include "ctype.h"
#include "stdio.h"

#define ESCAPE_CHAR_TAB '\t'
#define ESCAPE_DOT '.'
#define NUMBER '0'

int gettop(char s[]) {
	int c = 0;
	int i = 0;
	/*skip white space character*/
	while ((s[0] = c = getch()) == ' ' || c == ESCAPE_CHAR_TAB)
		;
	s[1] = '\0';
	if (!isdigit(c) && c == ESCAPE_DOT) {
		return c;
	}
	if (isdigit(c)) {
		while (isdigit(s[i++] = c = getch()))
			;
	}
	if (c == ESCAPE_DOT) {
		while (isdigit(s[i++] = c = getch()))
			;
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch(c);
	}
	return NUMBER;
}

