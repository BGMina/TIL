#include <asdf.h>				//stdio.h, ctype.h ��� 
#define SPACE ' '
int main (void)
{
	char ch;
	
	ch=getchar();				//���ڸ� �д´�. 
	while(ch != '\n')			//������ ���� �ƴ� ���� 
	{
		if (ch== SPACE)			//�����̽��� �״�� �д�. 
			putchar(ch);		//�������� �ʴ´� 
		else
			putchar(ch+1);		//�ٸ� ���ڵ��� �����Ѵ�. 
		ch = getchar();			//���� ���ڸ� ��´�. 
	}
	putchar(ch);				//��� 
	
	return 0;
}
