// My first C-language.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i = 0;
	int j = 0;
	while (i < 9){
		++i;
		while (j < 9) {
			++j;
			printf("%d*%d=%d\n",i,j, i*j);
		}
		j = 0;
	}
    return 0;
}


