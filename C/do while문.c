#include <stdio.h>
int main (void)
{
	int num, input;
	scanf("%d", &input);
	
	do{
		printf("Hello! \n");
		num++;
	} while(num<input); //do while���� ������ �ѹ� ����, �� �� ���ǿ� ���� while���� �����Ѵ�. 
	return 0;
 }
