#include <stdio.h>
int main (void)
{
	int arr[5] = { 0 };		//array-arr�� �迭��  
	int i = 0, max = 0,min = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);		//�� 5�� �Է� 
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		max = arr[0];
		if (max < arr[i])			//ū�� ���ϱ� 
			max = arr[i];
		min = arr[0];
		if (min > arr[i])			//������ ���� 
			min = arr[i];
	}
	printf("   MAX : %d\tMIN : %d\n\n", max,min);
}
