#include <stdio.h>

int main(void)
{
	int a = 10; //int �� ����
	double b = 3.5; //double�� ����
	void* vp; //void ������

	vp = &a; //vp�� int�� a �ּ� ����
	printf(" a : %d\n", *(int*)vp); //*vp�� �ش��ϴ� �ּڰ��� ������

	vp = &b; //vp�� double�� b �ּ� ����
	printf(" b : %.1lf\n", *(double*)vp); //*vp�� �ش��ϴ� �ּڰ��� ������


	return 0;
}