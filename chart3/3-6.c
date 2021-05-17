#include <stdio.h>
//char배열에 문자열을 저장
int main()
{
	char fruit[20] = "strawberry";//20개의 방을 가진 문자열 선언과 strawberry로 값을 초기화


	printf("딸기 : %s\n", fruit); //저장된 문자열을 출력
	printf("딸기쨈 : %s %s\n", fruit, "jam");// 저장된 문자열을 출력하고 문자열을 삽입해서 출력

	return 0;
}