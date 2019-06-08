#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void filecopy(FILE *fpin, FILE *fpout);

int stderr_test_main(int argc, char *argv[]) {
	FILE *fp;
	char *prog = argv[0];
	if (argc == 1) {
		filecopy(stdin, stdout);
	} else {
		while (--argc > 0) {
			fp = fopen(*++argv, "r");
			if (fp == NULL) {
				fprintf(stderr, "%s can't be open file at path:%s", prog, *argv);
				exit(1);
				return 0;
			} else {
				printf("------------------------------------\n");
				filecopy(fp, stdout);
				fclose(fp);
			}
		}
	}
	if (ferror(stdout)) {
		fprintf(stderr, "Error while writing %s to stdout.", prog);
		exit(2);
	}
	return 0;
}

void filecopy(FILE *fpin, FILE *fpout) {
	int ch;
	while ((ch = getc(fpin)) != EOF) {
		putc(ch,fpout);
	}
}
