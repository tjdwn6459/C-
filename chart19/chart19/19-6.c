#include <stdio.h>
#define VER 7 //������ 7�� ġȯ
#define BIT16

int main(void)
{
	int max;

#if VER >= 6
	printf("���� %d�Դϴ�.\n", VER);
#endif //if���� ����

#ifndef BIT16 //BIT16�� �߰��ϸ� 
	max = 32767;// �̰��� ����ϰ�
#else
	max = 2147483647;//�ƴϸ� �̰��� �����ض�
#endif //���ǹ� ������

	printf("int�� ������ �ִ� : %d\n", max);

	return 0;

}