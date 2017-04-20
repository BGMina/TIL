#include <stdio.h>
int main (void)
{
	int alist[4][2][3] = {0};
	int i = 0, j = 0, k = 0,ncounter = 0;
	
	for (i=0; i<4; ++i)
	{
		printf("plane number : %d\n", i);			// 표 번호  
		for (j = 0; j<2; ++j)
		{
			for (k=0; k<3; ++k)
			{
				alist[i][j][k] = ++ncounter;		//3차원 배열, 값은 1씩 증가 
				printf("%d\t", alist[i][j][k]);
			}
			putchar('\n');
		}
		printf("\n\n");
	}
	return 0;
}
