#include <stdio.h>
void swap( );

int a = 10, b = 20; //�������� main �� swap���� �� �ǵ帱�� �ִ� (������ �ۿ��� �ؼ�)
int main(void)
{

	/*int a = 10, b = 20;*/
	int temp;
	printf("�ٲٱ��� �Լ� a, b : %d, %d", a, b);
	//�Լ� ����
	//�ٲٱ� �� �Լ� ���

	swap();a	
	printf(" �ٳ� �� a, b: %d, %d", a, b);


	return 0;
}

void swap()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}