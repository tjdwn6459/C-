#include <stdio.h>

void fruit(int count);

int main(void)
{

	fruit(1); //�Է� ���� 1

	return 0;
}
void fruit(int count) //�Լ��� ã�Ƽ� ���� count���� 1���� ��
{
	printf("apple\n"); //1�϶� �ϳ������� 
	if (count == 3)return; // ���ǹ� ���� ��Ű�� ������
	fruit(count + 1);// �ٽ� ���� 
}