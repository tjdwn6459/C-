//�ٸ�����ü�� ����� ���� ����ü
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct  profile //����ü ����
{
	int age; //����ü ��� ����
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;


};
int main(void)
{
	struct  student yuni; //yuni��� ��ü ����

	yuni.pf.age = 17; //����� ���ٽ� ��� ������ . ���
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;


	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);;
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	return 0;
}