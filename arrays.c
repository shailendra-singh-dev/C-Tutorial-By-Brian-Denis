#include "stdio.h"
void printarray(int arr[], int size);
void incrementelements(int arr[], int size);
void buildarray(int arr[], int size);

int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
//	printarray(arr, 5);
//	incrementelements(arr, 5);
//	printarray(arr, 5);
	int arr2[] = { };
	buildarray(arr2, 5);
	return 0;
}

void printarray(int arr[], int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void incrementelements(int arr[], int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]++);
	}
}

void buildarray(int arr[], int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("enter the value for %d\n", i);
		scanf("%d", &arr[i]);
	}
}
