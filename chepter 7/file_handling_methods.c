#include "stdio.h"
void read_structure_from_file();
void write_structure_to_file();

struct student {
	char *name;
	int roll_number;
	double marks;
};

void main() {
//	write_structure_to_file();
	read_structure_from_file();
}

void write_structure_to_file() {
	FILE *file = fopen("/home/shail/temp.dat", "w+b");
	if (NULL == file) {
		printf("File can't be open to write");
		return;
	}

	struct student s;
	s.name = malloc(100 * sizeof(char));

	while (1) {

		printf("Enter name:");
		scanf("%s", s.name);

		printf("Enter roll number:");
		scanf("%d", &s.roll_number);

		printf("Enter marks:");
		scanf("%lf", &s.marks);

		fwrite(&s, sizeof(s), 1, file);

		char ch = getchar();
		printf("Enter (Y/N) to continue");
		scanf("%c", &ch);

		if ('n' == ch || 'N' == ch) {
			printf("Writing to file is ended..");
			break;
		}
		continue;
	}

	fclose(file);
	free(s.name);
	free(file);
}

void read_structure_from_file() {
	FILE *file = fopen("/home/shail/temp.dat", "r+b");
	if (NULL == file) {
		printf("File can't be open to read");
		return;
	}
	struct student s;
	s.name = malloc(100 * sizeof(char));
	while (1) {
		int cnt = fread(&s,sizeof(s),1,file);
		if(0 == cnt){
			printf("End to file is reached..");
			break;
		}
		printf("%s %d %lf \n", s.name, s.roll_number, s.marks);
		continue;
	}
	fclose(file);
	free(s.name);
	free(file);
}
