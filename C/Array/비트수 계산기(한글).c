#include <stdio.h>
int main(void)
{
	char hangul[100] = { 0 };
	int bit = 0;
	
	printf("�Է� : ");
	gets(hangul);

	while (hangul[bit] != '\0')
		bit++;

	printf("�ѱ� ������ ������ %d�Դϴ�. \n",bit/2);		//�ѱ��� ��Ʈ���� 2���� 
	return 0;
}
