#include <stdio.h>
int main(void)
{
	char szbuffer[6] = {'H','e','l','l','o','\0'};	//문자열 배열일경우 마지막에는 꼭 \0을 붙혀 주어야한다. 

	char szdata[8] = {"Hello"};						//배열이 입력값보다 크다 해도 출력에는 문제가 없다. 

	char *pszbuffer = "Hello";						//아직 모르겠다. 

	puts(szbuffer);
	puts(szdata);
	puts(pszbuffer);
	return 0;
}
