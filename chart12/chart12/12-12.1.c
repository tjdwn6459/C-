#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("�տ��� 3���� ���ڸ� ���ϸ� ? \n");

	if (strncmp(str1, str2, 3) == 0) //���� ���� 3���� �� �������� ���� ������ 
		printf("���� \n");
	else

		printf("�ٸ���. \n");
}