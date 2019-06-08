#include "stdio.h"

struct Date {
	int day;
	int month;
	int year;
};

struct Person {
	char *name;
	char *address;
	int age;
	struct Date dob;
};

int structure_intro_main() {
	struct Person person;
	person.name = malloc(1000 * sizeof(char));
	person.address = malloc(1000 * sizeof(char));
	printf("Enter name");
	gets(person.name);
	printf("Enter age");
	scanf("%d",&person.age);
	printf("Enter Address");
	scanf("%c");
	gets(person.address);
	printf("Enter date of birth as dd/mm/yyyy");
	scanf("%d/%d/%d",&person.dob.day, &person.dob.month, &person.dob.year);
	printf("Person whose name is %s, age %d has DOB %d/%d/%d and Address is %s\n",
			person.name, person.age, person.dob.day, person.dob.month,
			person.dob.year,person.address);

	return 0;
}
