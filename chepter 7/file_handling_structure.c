#include "stdio.h"
void write_structure_to_file();

struct student {
	char *name;
	int roll_number;
	double marks;
};

void main() {
//		write_structure_to_file();
//	read_structure_from_file_v1();
	read_structure_from_file_v2();
}

void write_structure_to_file() {
	FILE *file = fopen("/home/shail/temp.txt", "w");
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

		char ch = getchar();
		printf("Enter (Y/N) to continue");
		scanf("%c", &ch);

		fprintf(file, "%s\t%d\t%lf\n", s.name, s.roll_number, s.marks);

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

void read_structure_from_file_v1() {
	FILE *file = fopen("/home/shail/temp.txt", "r");
	if (NULL == file) {
		printf("File can't be open to read");
		return;
	}
	struct student s;
	s.name = malloc(100 * sizeof(char));
	while (1) {
		fscanf(file, "%s\t%d\t%lf\n", s.name, &s.roll_number, &s.marks);
		printf("%s\t%d\t%lf\n", s.name, s.roll_number, s.marks);

		printf("Enter (Y/N) to continue");
		char ch = getchar();
		scanf("%c", &ch);
		if ('n' == ch || 'N' == ch) {
			printf("Writing from file is ended..");
			break;
		}
		continue;
	}
	fclose(file);

	free(s.name);
	free(file);
}

void read_structure_from_file_v2() {
	FILE *file = fopen("/home/shail/temp.txt", "r");
	if (NULL == file) {
		printf("File can't be open to read");
		return;
	}
	struct student s;
	s.name = malloc(100 * sizeof(char));
	while (1) {
		int cnt = fscanf(file, "%s\t%d\t%lf\n", s.name, &s.roll_number,
				&s.marks);
		if (-1 == cnt) {
			printf("Reading from file is ended..");
			break;
		}
		printf("%s\t%d\t%lf\n", s.name, s.roll_number, s.marks);
	}

	fclose(file);
	free(s.name);
	free(file);
}
