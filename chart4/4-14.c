#include <stdio.h>

//연산자 우선순위와 연산방향
int main()
{

	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res);

	res = ++a * 3;
	printf("res = %d\n", res);

	res = a > b && a != 5; 
	printf("res = %d\n", res);  /*두개의 항이 모두 참일시 res가 1을 입력받아 출력*/

	res = a % 3 == 0;//나눴을때의 값이 0과 같은지 확인
	printf("res = %d\n", res);


	return 0;
}