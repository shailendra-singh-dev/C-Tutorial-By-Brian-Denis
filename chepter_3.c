#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAXSIZE 10
#define CHAR_ZERO '0'
#define CHAR_ONE '1'
#define CHAR_TWO '2'
#define CHAR_THREE '3'
#define CHAR_FOUR '4'
#define CHAR_FIVE '5'
#define CHAR_SIX '6'
#define CHAR_SEVEN '7'
#define CHAR_EIGHT '8'
#define CHAR_NINE '9'
#define WHITE_CHAR_SPACE ' '
#define WHITE_CHAR_TAB '\t'
#define WHITE_CHAR_NEXT_LINE '\n'

int binarysearch(int x, int array[], int n);
void countdigits();
void integertostring(int num, char s[]);
void reverse(char s[]);
void gotofunction();
int trim(char s[]);

int main() {
	//binarysearch
	//	int element = 10;
	//	int array[] = { 0, 90, 10, 33, 344, 90 };
	//	int position = binarysearch(element, array, 6);
	//	printf("Binary search position is :%d", position);

	//countdigits...
	//countdigits();

	//stringtointeger
	//	int c = 0;
	//	int num = stringtointeger("123");
	//	printf("%d", num);
	//	while ((c = getchar()) && stringtointeger(c) != EOF)
	//		;

	//	int num = -123;
	//	char s[10];
	//	integertostring(num, s);

//	int trimmedlength = trim("shail singh"
//		" 	");
//	printf("trimmedlength=%d", trimmedlength);


	gotofunction();
	return 0;
}

int binarysearch(int x, int array[], int n) {
	int low = 0;
	int high = n - 1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (x < array[mid]) {
			low = 0;
			high = mid - 1;
		} else if (x < array[mid]) {
			low = mid + 1;
			high = n;
		} else {
			return mid;
		}
	}
	return -1;
}

void countdigits() {
	int nwhite = 0;
	int nothers = 0;
	int c = 0;
	int i = 0;
	int digits[MAXSIZE];
	for (i = 0; i < MAXSIZE; i++)
		digits[i] = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
		case CHAR_ZERO:
		case CHAR_ONE:
		case CHAR_TWO:
		case CHAR_THREE:
		case CHAR_FOUR:
		case CHAR_FIVE:
		case CHAR_SIX:
		case CHAR_SEVEN:
		case CHAR_EIGHT:
		case CHAR_NINE:
			digits[c - CHAR_ZERO] = c - CHAR_ZERO;
			break;

		case WHITE_CHAR_SPACE:
		case WHITE_CHAR_TAB:
		case WHITE_CHAR_NEXT_LINE:
			nwhite++;
			break;

		default:
			nothers++;
			break;
		}
	}

	i = 0;
	printf("Digits are:");
	while (i < MAXSIZE) {
		printf("%d ", digits[i]);
		i++;
	}
	printf("White space characters are:%d", nwhite);
	printf("Other characters are:%d", nothers);
}

int stringtointeger(char s[]) {
	int i, n, sign;
	for (i = 0; isdigit(s[i]); i++)
		;
	sign = s[i] == '-' ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') {
		i++;
	}
	for (n = 0; isdigit(s[i]); i++) {
		n = n * 10 + (s[i] - '0');
	}
	return sign * n;
}

void integertostring(int n, char s[]) {
	int sign = 0;
	if ((sign = n) < 0) {
		n = -n;
	}
	int i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	s[i++] = '\0';
	reverse(s);
	printf("%s", s);
}

void reverse(char s[]) {
	int i;
	int j = strlen(s) - 1;
	for (i = 0; i < j; i++, j--) {
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

int trim(char s[]) {
	int i;
	for (i = strlen(s); i >= 0; i--) {
		if (s[i] == ' ' || (s[i] == ' ' && s[i] == '\t') || (s[i] == ' '
				&& s[i] == '\t' && s[i] == '\n')) {
			break;
		}
	}
	s[i++] = EOF;
	return i;
}

void gotofunction() {
	int i, j, k;

	for (i = 0; i < 100; i++) {
		for (j = 0; i < j; j++) {
			for (k = 0; k < j; k++) {
				goto gotit;
			}
		}
	}
	gotit:
	printf("%d",100);
}
