/* Created on: 09-Jul-2016
 * Author: shail
*/

#include <stdio.h>
#include <stdlib.h>

# define NEW_LINE_DELIMETER '\n'
# define NEW_WORD_DELIMETER_TAB '\t'
# define NEW_WORD_DELIMETER_EMPTY_CHAR ' '
#define MAX_LENGTH 15
#define IN_WORD 1
#define OUT_WORD 0
#define MAX_LENGTH 15
#define IN_WORD 1
#define OUT_WORD 0
#define LINE_MEX_LENGTH 1000
#define NULL_CHARACTER '\0'

void countwhitespacechars();
void copy();
void countlines();
void arraysofcountchars();
int power(int base, int n);
void printLargestLineLength();
int getLargestLineLength();
void copyString();

char longestLine[MAX_LENGTH];
char line[MAX_LENGTH];

int chepter_1_main() {
	printLargestLineLength();
	return 0;
}

void countlines() {
	int c;
	int countLine = 0;
	printf("countLine()");
	while ((c = getchar()) != EOF) {
		if (c == NEW_LINE_DELIMETER) {
			++countLine;
		}
	}
	printf("countLine:%d\n", countLine);
}

void copy() {
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

void countwhitespacechars() {
	int inputChar;
	int newLine = 0;
	int newWord = 0;
	int newCharacter = 0;

	while ((inputChar = getchar()) != EOF) {
		++newCharacter;
		if (inputChar == NEW_LINE_DELIMETER) {
			++newLine;
			++newWord;
		} else if (inputChar == NEW_WORD_DELIMETER_TAB || inputChar
				== NEW_WORD_DELIMETER_EMPTY_CHAR) {
			++newWord;
		}
	}
	printf("newLine:%d, newWord:%d,newCharacter:%d", newLine, newWord,
			newCharacter);
}

void arraysofcountchars() {
	int c, i, nwhite, nothers;
	int ndigit[10];

	nwhite = nothers = 0;
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		int digit = c - '0';
		if (c >= '0' && c <= '9') {
			ndigit[digit] = digit;
		} else if ((c == NEW_LINE_DELIMETER) || (c
				== NEW_WORD_DELIMETER_EMPTY_CHAR) || (c
				== NEW_WORD_DELIMETER_TAB)) {
			++nwhite;
		} else {
			++nothers;
		}
	}
	printf("Digits:");

	for (i = 0; i < 10; i++) {
		printf("%d ", ndigit[i]);
	}

	printf("White space characters:%d, Others:%d", nwhite, nothers);
}

int power(int base, int n) {
	int p = 1;
	int i;
	for (i = 1; i <= n; i++) {
		p = p * base;
	}
	return p;
}

void printLargestLineLength() {
	int max;
	int len;

	while ((len = getLargestLineLength()) > 0)

		if (len > max) {
			max = len;
			copyString();
		}

	if (max > 0) {
		printf("Largest string is %s", longestLine);
	}

}

int getLargestLineLength() {
	int c, i;
	extern char line[];
	for (i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != EOF && c
			!= NEW_LINE_DELIMETER; ++i) {
		line[i] = c;
	}
	if (c == NEW_LINE_DELIMETER) {
		line[i] = NEW_LINE_DELIMETER;
		++i;
	}
	line[i] = NULL_CHARACTER;
	return i;
}

void copyString() {
	int i = 0;
	while ((longestLine[i] = line[i]) != NULL_CHARACTER) {
		++i;
	}
}
