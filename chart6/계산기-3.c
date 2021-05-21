#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b; // 입력받을 숫자를 선언
	char ch; // 연산기호를 선언
	int sum; // 계산해서 받을값 선언
	

	while (1) //반복문
	{


		printf("계산기를 실행 하겠습니까 O ,X ?"  ); //값을 받을 공간 만듦
		scanf(" %c", &ch);

		if(ch=='X')
		{
			printf("중단"); // X의 값일때 중단되며 나가게 된다
			exit(0);//프로그램 종료
		}
		else
		{
			printf("계속\n"); //X아닌 값일때 반복 한다
		}

		printf("두 수를 입력하세요. : ");
		scanf("%d %d", &a, &b); // 빈값이라 입력받을값 scanf


		printf("연산기호를 입력하세요. : ");
		scanf(" %c", &ch); //빈값을 입력받을 값 설정scanf




		switch (ch) //ch에 연산을 받으면 해당 연산(+,-,*,/)중에 실행하고 break
		{
		case '+':
			sum = a + b;
			break;

		case '-':
			sum = a - b;
			break;
		case '*':
			sum = a * b;
			break;
		case '/':
			sum = a / b;
			break; 
		}

		printf("사칙연산의 값은 : %d\n", sum); //위에서 연산이 되어 sum에 입력받은 값을 출력한다 

		
		
	}


	return 0;
}
