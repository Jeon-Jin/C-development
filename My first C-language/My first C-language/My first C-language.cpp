// My first C-language.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

/*int main()
{
	int i;
	for (i = 1; i < 6; i++)
		printf("*\n");
}*/

int main()
{
	int i = 31,num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (i; i >= 0; --i)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}