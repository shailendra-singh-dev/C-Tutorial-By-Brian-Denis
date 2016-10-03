#include "stdio.h"
#define TOTAL_BOOKS 2

struct book {
	char *name;
	int pages;
	double price;

} books[TOTAL_BOOKS];

int main() {
	int i = 0;
	for (i = 0; i < TOTAL_BOOKS; i++) {
		printf("Enter book name");
		books[i].name = malloc(100 * sizeof(char));
		gets(books[i].name);
		printf("Enter book pages");
		scanf("%d", &books[i].pages);
		printf("Enter book price");
		scanf("%lf", &books[i].price);
		scanf("%c");
	}

	for (i = 0; i < TOTAL_BOOKS; i++) {
		printf("[%s %d %f]", books[i].name, books[i].pages, books[i].price);
	}

}

