#include <stdio.h>


// ���ڿ��� �ٲܶ� ���������� �ٲ����ʰ� �����ϴ� �������� ���� �ٲٸ� ������°� �ٲ��
void swap_ptr(char** ppa, char** ppb); // �� ������ ���� �ٲٰ����ϴ°��� �μ��� �ְ� �Լ��� �� �ּҸ� ���� ���� �Ѵ�.

int main(void)
{
	char* pa = "success"; //*pa�� �迭 ����
	char* pb = "failure";//*pb�� �迭 ����

	printf("pa -> %s , pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);//�ش��ּ���  �Լ� ȣ��
	printf("pa -> %s , pb -> %s\n", pa, pb);


	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt; //������ ����
	pt = *ppa; //pt�� ppa�� �ּҸ� ���� ������ ���� ����
	*ppa = *ppb;//ppa��  �ش絥���Ϳ� ppb�� �ش絥���� ���� ����
	*ppb = pt; //  pt ��ppb�� �ش絥���� ���� ����
	//���ڿ��� ���������ͷ� �����ö� ��ĭ�� �迭�� �ش��ϴ� ���� �����͵� �ٰ�Ƽ ���ʴ�� ȣ��ȴ�
}