#include<stdio.h>
int main()
{

	int a = 10, b = 20;
	int c, d;
	c = ++a; /*a������ ������Ű��a=11 c�γѱ�c=11*/

	d = --b;/*b�� ���� ���ҽ�Ű��b=19 �ѱ�d=19*/
	printf("���� a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	c = a++; /*c�� �����ѱ�� c=11 a�� ������Ŵ a=12*/

	d = b--; /*b�� ���� d�� ���� �ѱ�� d=19 b�� ���� ���ҽ�Ŵ b=18*/
	printf("���� a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);


	return 0;
}