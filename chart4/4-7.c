#include<stdio.h>
int main()
{
	int a = 10, b = 20, res;

	a + b; /*�״��� ����� �����ؾ� �Ǽ� �ӽ������ ���� ���� ���� �ִ� (����)�������Ϳ��� ���Կ����� ������ �޸𸮿� ����*/
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b; /*������ (res �޸�)������� ���*/
	printf("%d + %d = %d\n", a, b, res);



	return 0;
}