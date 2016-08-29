#include "pointer_arrays.h"
#include "stdio.h"

#define MAXLEN 5000

int getline(char *array, int maxlength) {
	int c, i;
	for (i = 0; i < maxlength - 1 && (c = getchar()) != EOF; i++) {
		array[i] = c;
	}
	if (c == '\n') {
		array[++i] = '\n';
	}
	array[++i] = '\0';
	return i;
}

int readlines(char *lineptr[], int maxlines) {
	int len = 0, nlines = 0;
	char *p, line[MAXLEN];
	while ((len = getline(line, maxlines))) {
		if (nlines >= maxlines) {
			return -1;
		} else {
			lineptr[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}

void writelines(char *lineptr[], int nlines) {
	while (--nlines > 0) {
		printf("%s", *lineptr++);
	}
}

void quicksort(char *lineptr[], int left, int right) {

}

int partition(char lineptr[], int left, int right) {

}
