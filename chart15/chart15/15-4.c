#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary);//ary�� �ּڰ�
	printf("ary�� �ּ� : %u\n", &ary);//ary�� �ּڰ�
	printf("   ary + 1 : %u\t", ary + 1); // ary��ü�� �ּҷ� ���϶��� ù��° ��Ҹ� ����Ű�ϱ� ����� ũ��� 4�� 
	printf(" &ary + 1 : %u\n", &ary + 1);// &ary�� �迭��ü�� ����Ű�⿡ 20�� �ȴ� 



	return 0;



}