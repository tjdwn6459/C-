#include <stdio.h>
void func(int (*fp)(int, int));
int sum(int a, int b);//�� ������ ���ϴ� �Լ�
int mul(int a, int b);//�� ������ ���ϴ� �Լ�
int max(int a, int b);//�� ���� �� ū�� ���ϴ� �Լ�

int main(void)
{
	int sel;  //

	printf("01 �� ������ �� \n");
	printf("02 �� ������ �� \n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf_s("%d", &sel);// sel�� �ش��ϴ� ���갪 ����
	switch (sel) //������ ���õ� ���� ã�� �Լ� ȣ��(switch��)
	{

	case 1: func(sum); break;
	case 2: func(mul); break; //mul�̶�� �Լ� ȣ�� �ϸ� return �� �Է�
	case 3: func(max); break;//�Լ��� ������ case���� ���� ������
	}

	return 0;//����� ��ȯ�� ���α׷� ����
}

void func(int(*fp)(int, int)) //int(*fp)(int, int) mul�̶�� �Լ� 

{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ���.");
	scanf_s("%d%d", &b, &a);
	res = fp(a, b); //fp�� ����Ű�� ������ ���� �����ϰ� return���� res�� ����ȴ� 
	printf("����� : %d\n", res);//res�� ����� ���� ���
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
	
}