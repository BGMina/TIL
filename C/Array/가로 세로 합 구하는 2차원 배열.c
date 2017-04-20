#include <stdio.h>
int main (void)
{
	int alist[3][4]={
		{10, 20, 30},
		{40, 50, 60}
	};
	
	int i=0,k=0;
	
	for(i=0; i<3; i++){
		for(k=0; k<3; k++)
				alist[i][3]+=alist[i][k];			//세로 4번째 줄 구하는 for문  
		}
		
	
	for(i=0; i<2; i++){
		for(k=0; k<4; k++)
				alist[2][k]+=alist[i][k];			//가로 3번째 줄 구하는 for문 
		}	

	for(i=0; i<3; i++){
		for(k=0;k<4; k++)
			
			printf("%d\t",alist[i][k]);				//출력 for 문  
				putchar('\n');
		}
			return 0;
		}
