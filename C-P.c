#include <stdio.h>
int main() {
	int year = 1900;
	if (year % 400 == 0)
		printf(�����⡱);
	else if (year % 100 == 0)
		printf(������ƴԡ�);
	else if (year % 4 == 0)
		printf(�����⡱);
	else
		printf(������ƴԡ�);
	return 0;
}