#include <stdio.h>

//콤마 연산자
int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b); //먼저 값을 각각 1씩 증가시켜준다(차례대로 연산이 수행되며 결과적으로 res에 저장되는 값은 마지막 값이다)

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res); //차례대로 연산이 수행되어  res 에 저장되는 값은 증가된 b의값이다.(21)



	return 0;
}