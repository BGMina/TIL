#include <stdio.h>
#define SIZE 10											//SIZE를 10으로 고정

int top = -1;											//배열의 번호를 사용하기 위한 top 
int stack[SIZE];										//스택이라는 배열 선언
int item;												//입력 받는 item 선언


void push()
{
	if (top >= 9)										//배열 번호가 9이상이면 오버플로우 출력
	{
		printf("\n\n\t\t overflow\n\n\n");
		return;
	}
	else
	{
		top++;											//9이상이 아니면 배열 번호를 올려준후
		stack[top] = item;								//item에 받은 값을 스택 배열에 삽입
	}
}

void pop()
{
	if (top<0)											//배열 안의 값이 다 빠져 나갔을때 언더플로우 출력
	{
		printf("\n\n\t\t\t underflow!!\n\n\n");
	}
	else
		printf("\n\n    output number : %d    \n\n", stack[top]);		//0미만이 아니면 스택에 있던 값을 print시킨 뒤
	top--;												//top을 1 내림
}

void main()
{
	int i;												//반복문 용 지역변수 i 선언

	while (1)											//계속 나오도록 while문을 돌림. 괄호 안에 1 또는 true 넣기
	{
		printf("\t ll--------------------------------------------ll\n");		//인터페이스..?
		printf("\t ll--------------------------------------------ll\n");
		printf("\t ll   Plese push valuve as you want            ll\n");
		printf("\t ll   if you push 9999, program pop the value  ll\n");
		printf("\t ll--------------------------------------------ll\n");
		printf("\t ll--------------------------------------------ll\n");

		printf("STACK [ ");							//스택 안에 뭐가 들어가 있는지 알려줌
		for (i = 0; i <= top; i++)					//for문으로 계속 돌려줌. i가 top까지만 되도록 함
			printf("%d. %d\t",i+1, stack[i]);		//i+1로 몇번째로 들어간 값인지 알려주고 숫자 출력 
		printf("]\n\n");

		printf("input : ");							//스택에 넣어줄 값을 받음
		scanf("%d", &item);							//스택에 넣어줄 값을 받음

		if (item != 8888 && item != 9999)			//8888이나 9999가 아니면
		{
			system("cls");							
			push(item);								//push함수에 item에 받은 값을 넣어서 돌려줌
		}

		else if (item == 8888)						//8888을 item에 받으면
			break;									//프로그램이 종료됨

		if (item == 9999) {							//9999를 item에 받으면
			system("cls");							//깨끗이 치워준 뒤
			pop();									//pop함수가 실행됨
		}
	}
}
