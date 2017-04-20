#include <stdio.h>
int main (void)
{
	int alist[5] = { 0 }; //배열은 함수명 [공간의 수] ={들어갈 숫자}
	int i = 0;
	
	for (i = 0; i < 5; ++i)
		scanf("%d",&alist[i]);
		
	for (i = 0; i < 5; ++i)
		printf("%d ", alist[i]);
		
	return 0;
 } 
