#include <stdio.h>
#include "user.h" //����� ��� ����



int main()//return�޾Ƽ� ���ο��� ȣ��
{
	int n1, n2;
	int result, num;
	input_data(&n1, &n2);//�ּڰ��� ��������� �ٸ����� ����� ����
	result = sum(n1, n2);
	/*printf("%d\n", num);*/
	printf("�� ������ �� : %d\n", result);




	return 0;
}