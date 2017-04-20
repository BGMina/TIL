#include <stdio.h>
int main (void)
{
	int num, input;
	scanf("%d", &input);
	
	do{
		printf("Hello! \n");
		num++;
	} while(num<input); //do while문은 무조건 한번 실행, 그 뒤 조건에 따라서 while문을 실행한다. 
	return 0;
 }
