#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision //vision����ü ����
{
	double left;//double���� ��� ���� ����
	double right;
};
struct vision exchange(struct vision robot); // ��� : ����ü Ÿ���� vision �� �÷��� �ٲٴ� �Լ�

int main(void)
{
	struct vision robot;//vision����ü Ÿ���� robot���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); //�ּҰ��� �ְ� �ִ� 
	robot = exchange(robot); //robot�̶�� ����ü ������ ���� (exchange)�Լ� ȣ��
	printf("�ٲ� �÷� : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;

}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;//�¿� �÷� ��ȯ
	robot.left = robot.right;
	robot.right = temp;

	return robot; //robot�̶�� ����ü ���� return(����ü �ȿ� �ִ� ����鵵 ���� ����)
};