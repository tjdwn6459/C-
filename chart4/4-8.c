#include <stdio.h>

//형 변환 연산자가 필요한 경우
int main()
{

	int a = 20, b = 3;//
	double res; //연산의 값을 저장할 변수

	res = ((double)a) / ((double)b); //결과를 받는 값이 double 이니까 형을 변환시켜야 한다
	printf("a = %d, b  = %d\n", a, b);
	printf("a/ b의 결과 : %.1lf\n", res);

	a = (int)res; /*형변환은 대입의 오른쪽 연산자만 시킬 수 있다*/
	printf("(int) %.1lf의 결과 : %d\n", res, a);


	return 0;
}