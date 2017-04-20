#include <stdio.h>
int main(void)
{
	char hangul[100] = { 0 };
	int bit = 0;
	
	printf("입력 : ");
	gets(hangul);

	while (hangul[bit] != '\0')
		bit++;

	printf("한글 문자의 개수는 %d입니다. \n",bit/2);		//한글은 비트수가 2개임 
	return 0;
}
