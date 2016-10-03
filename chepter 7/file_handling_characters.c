#include "stdio.h"
void write_file(char* file_path);


int main() {
	write_file("/home/shail/temp1.txt");
	return 0;
}

void read_file(char *file_path) {
	FILE *file = fopen(file_path, "r");
	if (file == NULL) {
		printf("Error reading a file");
	} else {
		printf("File can be read..\n");
	}
	printf("-----------------File reading starts----------------\n");
	while (1) {
		char ch = fgetc(file);
		if (ch == EOF) {
			printf("----------------File reading end-------------------\n");
			return;
		}
		printf("%c", ch);
	}
	fclose(file);
}

void write_file(char* file_path) {
	FILE *file = fopen(file_path, "w");
	if (file == NULL) {
		printf("Error creating a file");
	} else {
		printf("File can be written..\n");
	}
	printf("-----------------File writing starts----------------\n");
	while (1) {
		char ch = getchar();
		if (ch == EOF) {
			printf("----------------File writing end-------------------\n");
			return;
		}
//		fputc(ch,file);
		putc(ch,file);
	}
	fclose(file);
}
