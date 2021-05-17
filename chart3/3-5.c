#include <stdio.h>

//유효숫자 확인
int main()
{
	float ft = 1.234567890123456789;//유효숫자의 값으로 초기화
	double db = 1.234567890123456789;

	printf("float 형 변수의 값: %.20f\n", ft);//소수점 20자리 이하의 값 출력
	printf("double 형 변수의 값: %.20lf\n", db);

	return 0;
}