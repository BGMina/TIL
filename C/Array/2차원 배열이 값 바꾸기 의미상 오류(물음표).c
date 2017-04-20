#include <stdio.h>
int main (void)
{
	int alist[3][4] ={
	{10, 20, 30, 40},
	{50, 60, 70, 80},
	{90, 100, 110, 120}
	};
	
	int i = 0, j = 0;
	
	alist[0][4] = 300;							//자리수 바꾸기. [0][4] = [1][0] 
	
	for(i=0; i<3; ++i)
	{
		for(j=0; j<4; ++j)
			printf("%d\t",alist[i][j]);			//출력 for문  
		putchar('\n');
	}
	return 0;
}
