#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pointers_arrays_main() {
	//	int ar[5] = { 11, 12, 13, 14, 15 };
	//	//	printf("Address of first element OR value of pointer:=%d\n", ar);
	//	//	printf("Address of first element OR value of pointer:=%d\n", &ar[0]);
	//	//	printf("Value at first element pointer/address=%d\n", *ar);
	//	//	printf("Value at second element pointer/address=%d,%d\n", *(ar + 1), ar[1]);
	//	//	printf("Value at third element pointer/address=%d,%d\n", *(ar + 2), ar[2]);
	//
	int i, j;
	//	for (i = 0; i < 5; i++)
	//		printf("%d %d %d %d\n", ar[i], *(ar + i), i[ar], *(i + ar));
	//
	//	int* ptr;
	//	ptr = ar;
	//	printf("---------------------------\n");
	//	for (i = 0; i < 5; i++)
	//		printf("%d %d %d %d\n", *(ptr + i), *(i + ptr), ptr[i], i[ptr]);
	//
	//	printf("---------------------------\n");
	//	int* pt1;
	//	int* pt2;
	//
	//	pt1 = ar;//&ar[0]
	//	pt2 = &ar[3];//ar+3
	//	printf("Difference is=%d\n", pt2 - pt1);
	//
	//	pt2 = &ar[0];
	//
	//	if (pt1 == pt2)
	//		printf("Both points to same address");


	int ar1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }; //{1,2,3,4,5,6}
	int (*ptr)[3];
	ptr = ar1;
	printf("%d", *(*(ptr + 0) + 0));
	printf("%d", *(*(ptr + 1) + 2));

	for (i = 0; i < 2; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			printf("%d", *(*(ptr + i) + j));
		}
	}

	return (0);
}

