#include <stdio.h>
int main (void)
{
	int alist[5] = { 10, 20, 30, 40, 50};
	int alistNew[5] = { 0 };
	int i = 0;
			
	for (i = 0; i < 5; ++i)
	{
		alistNew[i]=alist[i];		//�迭�� ����(?)�ÿ��� for���� ���ų� []�ȿ� ������ �� ��ȣ�� �Է� ���־����!! 
		printf("%d\t", alistNew[i]);
	}
	
	putchar('\n');
	
	return 0;
}
