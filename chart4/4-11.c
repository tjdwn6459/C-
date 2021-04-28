#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res); //차례대로 연산이 수행되어  res 에 저장되는 값은 증가된 b의값이다.(21)



	return 0;
}