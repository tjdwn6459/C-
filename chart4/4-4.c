#include <stdio.h>
int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; //a�ǰ��� 6���� ������Ų�Ŀ� ���ؼ� �Ѵ�
	post = (b++) * 3; //b�� �����Ǳ����� �� 5�� 3�� ���Ѵ� 

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������: (++a) * 3 = %d , ������ : (b++) *3 = %d\n", pre, post);


	
	return 0;
}