#include <stdio.h>


//�� ������ ����� Ȯ��

int main()
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a >10) && (a < 20) : %d\n", res); /*������ ��� ������ ��*/

	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20): %d\n", res); /*������ �ϳ��� ������ ��*/

	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res); /*!(�����̸�) ��*/ 


	return 0;
}