#include <stdio.h>
int main(void)
{
	char szbuffer[32] = { 0 };
	int length = 0;
	
	printf("�̸� : ");
	gets(szbuffer);					//�̸� �Է� 

	while (szbuffer[length] != '\0')
		length++;							//��Ʈ �� ���ϴ� �� ���� 

	printf("�̸� : %s(%d) \n", szbuffer, length);
	printf("null : %c",szbuffer[length]);
	return 0;
}
