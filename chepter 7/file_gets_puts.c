#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(int argc, char *argv[]) {
	char *line;
	line = malloc(100 * sizeof(char));
	char *file_to_read = argv[1];
	char *file_to_write = argv[2];
	FILE *file_to_read_pointer, *file_to_write_pointer;
	file_to_read_pointer = fopen(file_to_read, "r");
	if (NULL == file_to_read_pointer) {
		exit(1);
	}
	file_to_write_pointer = fopen(file_to_write, "w");
	if (NULL == file_to_write_pointer) {
		printf("Error while opening file ");
		exit(2);
	}
	while (fgets(line, 100, file_to_read_pointer) != NULL) {
		printf("%s\n", line);
		fputs(line, file_to_write_pointer);
	}

	fclose(file_to_read_pointer);
	fclose(file_to_write_pointer);
}
