#include <stdio.h>


//������ �迭�� ���� ����ϴ� �Լ�
void print_str(char** pps, int cnt); // ��ȯ������, void ������ �Ű����� ����

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;


}
void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}