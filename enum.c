#include <stdio.h>

typedef enum WeekDay {
	Sun = 10, Mon, Tues, Wed, Thus, Fri, Sat
} WEEKDAY;

void enum_main() {
	WEEKDAY wd;
	wd = Wed;
	printf("%d", wd);
}
