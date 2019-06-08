#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int get_line_length(char line[], int lineMaxLength);

int get_line_length(char line[], int lineMaxLength) {
	int i = 0, c;
	while (0 < --lineMaxLength && (c = getchar()) != EOF && c != '\n') {
		line[i++] = c;
	}
	if (c == '\n') {
		line[i++] = '\n';
	}
	line[i] = '\0';
	return i;
}

int grep_main(int argc, char *argv[]) {
	char *line = "shailendra";
	int length = get_line_length(line, 100);
	printf("\n length=%d", length);
	int found = 0;
		if (argc == 2) {
		printf("Usage: find -name\n");
	} else {
		while (get_line_length(line, 100) > 0) {
			if (strstr(line, argv[1]) != NULL) {
				printf("%s", line);
				found++;
			}
		}
	}
	return found;
}

