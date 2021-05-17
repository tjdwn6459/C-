#include <stdio.h>

//unsigned를 잘못 사용한 경우
int main()
{
	unsigned int a;//unsigned는 양수만 저장하고 %u로 출력

	a = 4294967295; //변수 a 에 양수 저장
	printf("%d\n", a); //음수형태로 출력하니 음수 값이 나온다 
	a = -1;//a에 음수 저장
	printf("%u\n", a); //%u는 양수의 형태로 출력

	return 0;
}