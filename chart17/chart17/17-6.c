#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = { 90, 80, 70 };//����ü ���� ����� �ʱ�ȭ
	struct score* ps = &yuni; //�����Ϳ� yuni�� �ּڰ��� ����


	printf("���� : %d\n", (*ps).kor);//�����͸� �ǵ��̱� ���� ps������ �ּڰ� �ǵ鿩 ����� Ȯ��
	printf("���� : %d\n", ps -> eng);// "->" ������ ����ü ����Ʈ�� ���� ����� �����Ϸ��� ���
	printf("���� : %d\n", ps ->math);

	return 0;



}