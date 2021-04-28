#include <stdio.h>

int main()
{
	int a = 1; //변수 a의크기는 4바이트

	do //무조건 do에 있는건 실행
	{
		a = a * 2; 
	} while (a < 10); //1)while에서 조건문이 참이면 실행2) 아니면 반복문 빠져나옴
	printf("a : %d\n", a);


	return 0;
}