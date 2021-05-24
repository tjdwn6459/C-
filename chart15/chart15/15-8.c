#include <stdio.h>
void func(int (*fp)(int, int));
int sum(int a, int b);//두 정수를 더하는 함수
int mul(int a, int b);//두 정수를 곱하는 함수
int max(int a, int b);//두 정수 중 큰값 구하는 함수

int main(void)
{
	int sel;  //

	printf("01 두 정수의 합 \n");
	printf("02 두 정수의 곱 \n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf_s("%d", &sel);// sel에 해당하는 연산값 전달
	switch (sel) //위에서 선택된 값을 찾아 함수 호출(switch문)
	{

	case 1: func(sum); break;
	case 2: func(mul); break; //mul이라는 함수 호출 하며 return 값 입력
	case 3: func(max); break;//함수를 끝내면 case문을 빠져 나오고
	}

	return 0;//결과값 반환후 프로그램 종료
}

void func(int(*fp)(int, int)) //int(*fp)(int, int) mul이라는 함수 

{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요.");
	scanf_s("%d%d", &b, &a);
	res = fp(a, b); //fp가 가리키는 연산의 값을 수행하고 return값이 res에 저장된다 
	printf("결과값 : %d\n", res);//res에 저장된 값이 출력
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
	
}