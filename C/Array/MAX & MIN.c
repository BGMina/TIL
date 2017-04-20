#include <stdio.h>
int main (void)
{
	int arr[5] = { 0 };		//array-arr는 배열임  
	int i = 0, max = 0,min = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);		//값 5개 입력 
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		max = arr[0];
		if (max < arr[i])			//큰값 구하기 
			max = arr[i];
		min = arr[0];
		if (min > arr[i])			//작은값 구하 
			min = arr[i];
	}
	printf("   MAX : %d\tMIN : %d\n\n", max,min);
}
