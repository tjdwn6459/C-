#include <stdio.h>


//������ �迭�� ���� ����ϴ� �Լ�
void print_str(char** pps, int cnt); // ��ȯ������, void ������ �Ű����� ����

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; //������ �迭����
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);//count������ ����
	print_str(ptr_ary, count);//�Լ� ȣ��

	return 0;


}
void print_str(char** pps, int cnt) //�Է� ���� ������ �ΰ��� ����Ѵ�
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);//pps[i]�� *ptr_ary�� �迭�� ����Ű�� �迭�ȿ� �ִ� ���ҵ��� ���� �ϳ��� ����Ѵ� 
	}
}