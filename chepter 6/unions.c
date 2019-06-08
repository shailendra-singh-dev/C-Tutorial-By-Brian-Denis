#include "stdio.h"

typedef enum Type {
	CHAR, SHORT, INTEGER, LONG, FLOAT, DOUBLE, STRING
} TYPE;

typedef union Data {
	char Char;
	short Short;
	int Integer;
	long Long;
	float Float;
	double Double;
	char* String;
} DATA;

typedef struct {
	TYPE type;
	DATA data;
} VARIENT;

int unions_main() {
	VARIENT varient;
	//Reading int any time..
	printf("Enter any data ");
	int intData = 0;
	scanf("%d", &intData);
	varient.type = INTEGER;
	varient.data.Integer = intData;
	print_details(varient);

	//Reading String any time..
	printf("Enter any data");
	char* stringData = malloc(1000 * sizeof(char));;
	gets(stringData);
	varient.type = STRING;
	varient.data.String = stringData;
	print_details(varient);

}

void print_details(VARIENT varient) {
	switch (varient.type) {
	case CHAR:
		printf("Value is %c", varient.data.Char);
		break;

	case SHORT:
		printf("Value is %d", varient.data.Short);
		break;

	case INTEGER:
		printf("Value is %d", varient.data.Integer);
		break;

	case LONG:
		printf("Value is %l", varient.data.Long);
		break;

	case FLOAT:
		printf("Value is %f", varient.data.Float);
		break;

	case DOUBLE:
		printf("Value is %lf", varient.data.Double);
		break;

	case STRING:
		printf("Value is %s", varient.data.String);
		break;
	}
}
