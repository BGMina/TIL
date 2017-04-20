#include <stdio.h>
int main(void)
{
	char szbuffer[32] = { 0 };
	int length = 0;
	
	printf("이름 : ");
	gets(szbuffer);					//이름 입력 

	while (szbuffer[length] != '\0')
		length++;							//비트 수 구하는 것 같음 

	printf("이름 : %s(%d) \n", szbuffer, length);
	printf("null : %c",szbuffer[length]);
	return 0;
}
