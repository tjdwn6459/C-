#include <stdio.h>

struct student //����� struct ����ü�̸�student
{

	int num;
	double grade; //����ü�� ����ν� ������ ���� �� �ִ�

};

int main(void)
{
	struct student s1; //����ü student��� ��ü 's1'����

	s1.num = 2; //������� ������ . �ؼ� 2�� ����ִ�
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num); //s1�̶�� ����ü���ִ� num�� ������ ���
	printf("���� : %.1lf\n", s1.grade);  

	return 0; //���α׷� ����

}

// ����� ����ü ����
//����ü�� ������ ����
//������ٿ����ڸ� ���� ���� �ִ�
//����ü�� ����� ������ ���� ��� 