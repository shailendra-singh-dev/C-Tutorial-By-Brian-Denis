#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void filecopy(FILE *fpin, FILE *fpout);

int main(int argc, char *argv[]) {
	FILE *fp;
	if (argc == 1) {
		filecopy(stdin, stdout);
	} else {
		while (--argc > 0) {
			fp = fopen(*++argv, "r");
			if (fp == NULL) {
				printf("File can't be opened at path:%s", *argv);
				return 0;
			} else {
				printf("----------------------------------------------------------\n");
				filecopy(fp, stdout);
			}
		}
	}
	return 0;
}

void filecopy(FILE *fpin, FILE *fpout) {
	int ch;
	while ((ch = getc(fpin)) != EOF) {
		putc(ch,fpout);
	}
}
