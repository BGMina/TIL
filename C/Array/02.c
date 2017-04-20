#include <stdio.h>
int main (void)
{
	int alist[5] = { 10, 20, 30, 40, 50};
	int i = 0;
	
	for (i = 0; i < 5; ++i)
		printf("%d\t",alist[i]);
	putchar('\n');
	
	alist [0] = 100; 		//일부 배열 요소의 값을 변경
	alist [3] = 200; 		//일부 배열 요소의 값을 변경
	
	alist [0] = alist[4]; 		//일부 배열 요소의 값을 변경
	alist [1] += alist[2]; 		//일부 배열 요소의 값을 변경
	alist [4] = alist[3]*2;
	
	for (i = 0; i<5; ++i)
		printf("%d\t", alist[i]);
	putchar('\n');
	
	return 0;
	 
}
