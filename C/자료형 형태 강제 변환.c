#include <stdio.h>
int main (void)
{
	int x=5;
	
	printf("%d\n", 5/2);
	printf("%f\n", 5.0/2);
	printf("%f\n",5/2.0);
	printf("%f\n", (double)5/2);		//(double)형으로 강제 변 
	printf("%f\n", (double)x/2);
	printf("%f\n", x/(double)2);
	printf("%f\n", (double)(x/2));
	
	return 0;
 } 
