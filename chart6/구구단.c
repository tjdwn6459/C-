#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s, h; //����� s,h����

	printf("����� ��� �ұ�� : "); 
	scanf("%d", &s); // ���̶� �Է� ������ scanf

	for (h = 1; h <= 9; h++) //s�� �ش��ϴ� ���� ���������� h���� �ݺ��ǰ� ����
	{
		printf("%d * %d = %d\n", s, h, (s * h)); //�� ���
	}




	return 0;
}