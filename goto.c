#include "stdio.h"
#include "string.h"
int even_odd();
int even_odd_v1();

int goto_main() {
	return even_odd_v1();
}

int even_odd() {
	int num = 0;
	printf("enter a number");
	scanf("%d", &num);
	if (num % 2 == 0) {
		goto label_even;
	} else {
		goto label_odd;
	}
	label_even: printf("Number is Even");
	return 0;
	label_odd: printf("Number is Even");
	return 0;
}

int even_odd_v1() {
	int num = 0;
	printf("Enter a number");
	scanf("%d", &num);
	decrement_number: printf("Number is %d\n", num);
	if (num-- > 0) {
		goto decrement_number;
	} else {
		goto stop;
	}
	stop: return 0;
}
