#include <stdio.h>
int main (void)
{
	int alist[3][4] = {0};
	int i = 0, j = 0, ncounter = 0;
	
	for(i=0; i<3; ++i)
	{
		for (j = 0; j<4; ++j)
			alist[i][j]= ++ncounter;				//i와 j로 좌표 설정, 거기에 1씩 증가하도록 함  
	}
	
	for(i=0; i<3; ++i)
	{
		for (j = 0; j<4; ++j)
			printf("%d\t", alist[i][j]);			//출력 for 문 
	
		putchar('\n');
	}
	return 0;
 } 
