#include "stdio.h"

#include "stdio.h"
#define MULTIPLY(X,Y) X*Y
#define INCREMENT(x)  ++x
#define merge(a,b) a##b
#define get(a) #a
#define print(i,limit) while(i<=limit){\
						printf("%d",i);\
						i++;\
					   }

int main() {
	printf("%d\n", MULTIPLY(10,10));
	int x = 100;
	char *str = "abc";
	printf("%d\n", INCREMENT(x));
	printf("%s\n", INCREMENT(str));
	printf("%d\n", merge(123,567));
	printf("%s\n", get(123));

	int i = 1;
	print(i,10);
	return 0;
}
