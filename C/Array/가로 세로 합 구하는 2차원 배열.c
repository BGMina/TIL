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
				alist[i][3]+=alist[i][k];			//���� 4��° �� ���ϴ� for��  
		}
		
	
	for(i=0; i<2; i++){
		for(k=0; k<4; k++)
				alist[2][k]+=alist[i][k];			//���� 3��° �� ���ϴ� for�� 
		}	

	for(i=0; i<3; i++){
		for(k=0;k<4; k++)
			
			printf("%d\t",alist[i][k]);				//��� for ��  
				putchar('\n');
		}
			return 0;
		}
