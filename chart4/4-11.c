#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res); //���ʴ�� ������ ����Ǿ�  res �� ����Ǵ� ���� ������ b�ǰ��̴�.(21)



	return 0;
}