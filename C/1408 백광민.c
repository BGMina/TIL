#include <stdio.h>
#define SIZE 10											//SIZE�� 10���� ����

int top = -1;											//�迭�� ��ȣ�� ����ϱ� ���� top 
int stack[SIZE];										//�����̶�� �迭 ����
int item;												//�Է� �޴� item ����


void push()
{
	if (top >= 9)										//�迭 ��ȣ�� 9�̻��̸� �����÷ο� ���
	{
		printf("\n\n\t\t overflow\n\n\n");
		return;
	}
	else
	{
		top++;											//9�̻��� �ƴϸ� �迭 ��ȣ�� �÷�����
		stack[top] = item;								//item�� ���� ���� ���� �迭�� ����
	}
}

void pop()
{
	if (top<0)											//�迭 ���� ���� �� ���� �������� ����÷ο� ���
	{
		printf("\n\n\t\t\t underflow!!\n\n\n");
	}
	else
		printf("\n\n    output number : %d    \n\n", stack[top]);		//0�̸��� �ƴϸ� ���ÿ� �ִ� ���� print��Ų ��
	top--;												//top�� 1 ����
}

void main()
{
	int i;												//�ݺ��� �� �������� i ����

	while (1)											//��� �������� while���� ����. ��ȣ �ȿ� 1 �Ǵ� true �ֱ�
	{
		printf("\t ll--------------------------------------------ll\n");		//�������̽�..?
		printf("\t ll--------------------------------------------ll\n");
		printf("\t ll   Plese push valuve as you want            ll\n");
		printf("\t ll   if you push 9999, program pop the value  ll\n");
		printf("\t ll--------------------------------------------ll\n");
		printf("\t ll--------------------------------------------ll\n");

		printf("STACK [ ");							//���� �ȿ� ���� �� �ִ��� �˷���
		for (i = 0; i <= top; i++)					//for������ ��� ������. i�� top������ �ǵ��� ��
			printf("%d. %d\t",i+1, stack[i]);		//i+1�� ���°�� �� ������ �˷��ְ� ���� ��� 
		printf("]\n\n");

		printf("input : ");							//���ÿ� �־��� ���� ����
		scanf("%d", &item);							//���ÿ� �־��� ���� ����

		if (item != 8888 && item != 9999)			//8888�̳� 9999�� �ƴϸ�
		{
			system("cls");							
			push(item);								//push�Լ��� item�� ���� ���� �־ ������
		}

		else if (item == 8888)						//8888�� item�� ������
			break;									//���α׷��� �����

		if (item == 9999) {							//9999�� item�� ������
			system("cls");							//������ ġ���� ��
			pop();									//pop�Լ��� �����
		}
	}
}
