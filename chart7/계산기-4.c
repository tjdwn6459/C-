#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s, h;//지역변수라서 안에서만 사용
	char ch;
	//반복문 실행
	while(1) {
		printf("계산기를 실행하시겠습니까 O,X ?");
		scanf(" %c", &ch);

		if (ch == 'X')
		{
			printf("종료");
			exit(0);
		}
		else
		{
			printf("계속\n");
		}

		printf("두 숫자를 입력하세요. : "); //2개의 숫자를 받을 공간
		scanf("%d %d", &s, &h);

		printf("연산기호를 입력하세요 : ");//한개의 연산 받을 공간
		scanf(" %c", &ch);

		//연산기호에 해당값 출력
		if (ch == '+')
		{
			printf("사칙연산의 결과 : %d\n ", add(s, h));  //add(s, h)를 밑에 함수호출
		}
		else if (ch == '-')
		{
			printf("사칙연산의 결과: %d\n ", sub(s, h));
		}
		else if (ch == '*')
		{
			printf("사칙연산의 결과 : %d\n", mul(s, h));
		}
		else if (ch == '/')
		{
			printf("사칙연산의 결과 : %d\n", div(s, h));
		}
	}
	return 0;
}

int add(int a, int b) //s=2,h=2이면  값이 int(a =2) int(b=2)
{
	int result; //result공간 (변수선언)
	result = a + b; //변수 값 대입
	return result; //변수 값 반환해서 int 형의 add(s,h)에 값을 반환

	return a + b;

}

int sub(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int mul(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int div(int a, int b)
{
	int result;
	result = a / b;
	return result;
}


