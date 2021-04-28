#include<stdio.h>
int main()
{
	int a = 10, b = 20, c = 10;
	int res;


	/*참이면 결과 값이 1이 나오고 거짓이면 0이 나오게 된다ㅏ*/

	res = (a > b);
	printf("a > b :%d\n", res); 

	res = (a >= b);
	printf("a >= b:%d\n", res);

	res = (a < b);
	printf("a < b :%d\n", res);

	res = (a <= b);
	printf("a <= b :%d\n", res);

	res = (a <= c);
	printf("a <= c :%d\n", res);

	res = (a == b);
	printf("a == b:%d\n", res);

	res = (a != c);
	printf("a != c:%d\n", res);




	return 0;
}