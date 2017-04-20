#include <stdio.h>
int main (void)
{
	int alist[5] = { 10, 20, 30, 40, 50};
	int alistNew[5] = { 0 };
	int i = 0;
			
	for (i = 0; i < 5; ++i)
	{
		alistNew[i]=alist[i];		//배열을 복사(?)시에는 for문을 쓰거나 []안에 각각의 값 번호를 입력 해주어야함!! 
		printf("%d\t", alistNew[i]);
	}
	
	putchar('\n');
	
	return 0;
}
