#include <stdio.h>
int main (void)
{
	int alist[5] = { 0 }; //�迭�� �Լ��� [������ ��] ={�� ����}
	int i = 0;
	
	for (i = 0; i < 5; ++i)
		scanf("%d",&alist[i]);
		
	for (i = 0; i < 5; ++i)
		printf("%d ", alist[i]);
		
	return 0;
 } 
