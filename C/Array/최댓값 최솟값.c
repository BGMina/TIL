#include <stdio.h>
int main (void)
{
	int input[5] = { 0 };
	int i = 0, max , min;
	
	printf("숫자 5개을 입력해주세요 : ");
	
	for(i=0; i<5; i++)
		scanf("%d", &input[i]);
		
	max= input[0];
	min= input[0];
			
	for(i=0; i<5; i++){
		
		if(min>input[i])
			min=input[i];
			
		else if(input[i]>max)
			max=input[i];
		}
	
	printf("MIN : %d MAX : %d",min, max);

}
