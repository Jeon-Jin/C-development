#include <stdio.h>
int main() {
	int year = 1900;
	if (year % 400 == 0)
		printf(¡°À±³â¡±);
	else if (year % 100 == 0)
		printf(¡°À±³â¾Æ´Ô¡±);
	else if (year % 4 == 0)
		printf(¡°À±³â¡±);
	else
		printf(¡°À±³â¾Æ´Ô¡±);
	return 0;
}