#include <stdio.h>
int main() {
	int myScore = 77;
	if (myScore >= 90)
		printf(¡°A\n¡±);
	else if (myScore >= 80)
		printf(¡°B\n¡±);
	else if (myScore >= 70)
		printf(¡°C\n¡±);
	else if (myScore >= 60)
		printf(¡°D\n¡±);
	else
		printf(¡°F\n¡±);
}