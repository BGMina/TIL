#include <stdio.h>
int main (void)
{
	int alist[3][4] = {0};
	int i = 0, j = 0, ncounter = 0;
	
	for(i=0; i<3; ++i)
	{
		for (j = 0; j<4; ++j)
			alist[i][j]= ++ncounter;				//i�� j�� ��ǥ ����, �ű⿡ 1�� �����ϵ��� ��  
	}
	
	for(i=0; i<3; ++i)
	{
		for (j = 0; j<4; ++j)
			printf("%d\t", alist[i][j]);			//��� for �� 
	
		putchar('\n');
	}
	return 0;
 } 
