#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;        
	}
	else if(a == 0)
	{
		b = 2;  //else if�� �Ǵٸ� ���ǹ����� ���ǹ��� �� �� �ִ�
	}
	else
	{

		b = 3; // else �� ���ǹ��� �� �� ����
	}

	printf("b : %d\n", b);

	return 0;
}