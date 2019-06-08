#include "stdio.h"

typedef struct Date {
	int day;
	int month;
	int year;

} DATE;

typedef struct Student {
	char *name;
	int class;
	int rollNumber;
	double marks;
	DATE dob;
} STUDENT;

STUDENT read_student_details();
void print_student_details(STUDENT student);

int pointer_to_structure_main() {
	STUDENT student;
	student = read_student_details();
	print_student_details(student);
	print_student_details(student);
	change_marks(&student);
	print_student_details(student);
	return 0;
}

STUDENT read_student_details() {
	STUDENT student;
	student.name = malloc(1000 * sizeof(char));
	printf("Enter name:");
	gets(student.name);
	printf("Enter class:");
	scanf("%d", &student.class);
	printf("Enter Roll number:");
	scanf("%d", &student.rollNumber);
	printf("Enter marks:");
	scanf("%lf", &student.marks);
	scanf("%c");
	printf("Enter date of birth as dd/mm/yyyy:");
	scanf("%d/%d/%d", &student.dob.day, &student.dob.month, &student.dob.year);
	return student;
}

void print_student_details(STUDENT student) {
	printf(
			"Student whose name is %s, and roll number %d is in class %d has got %lf marks\n",
			student.name, student.rollNumber, student.class, student.marks);
	student.marks = 100.00;
}

void change_marks(STUDENT *student) {
	printf("Enter new marks:");
	scanf("%lf", &(student->marks));
//	scanf("%lf", &(*student).marks);
}

