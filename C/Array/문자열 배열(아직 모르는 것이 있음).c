#include <stdio.h>
int main(void)
{
	char szbuffer[6] = {'H','e','l','l','o','\0'};	//���ڿ� �迭�ϰ�� ���������� �� \0�� ���� �־���Ѵ�. 

	char szdata[8] = {"Hello"};						//�迭�� �Է°����� ũ�� �ص� ��¿��� ������ ����. 

	char *pszbuffer = "Hello";						//���� �𸣰ڴ�. 

	puts(szbuffer);
	puts(szdata);
	puts(pszbuffer);
	return 0;
}
