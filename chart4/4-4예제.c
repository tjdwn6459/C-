#include<stdio.h>
int main()
{

	int a = 10, b = 20;
	int c, d;
	c = ++a; /*a를먼저 증가시키고a=11 c로넘김c=11*/

	d = --b;/*b를 먼저 감소시키고b=19 넘김d=19*/
	printf("전위 a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	c = a++; /*c에 먼저넘기고 c=11 a를 증가시킴 a=12*/

	d = b--; /*b의 값을 d에 먼저 넘기고 d=19 b의 값을 감소시킴 b=18*/
	printf("후위 a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);


	return 0;
}