//5���� ��� ���̵� �̸� �޿��� ���� �� ����ü
//����ü�� ���� ����
//�Է� �ް� ���
//����� �޿� �Ѿ� ���(for)-> ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct employee
{
	int id;//int�� ��� ����
	char* name; //�����Ҵ� ��� ����
	int salary;


}Employee;
int main()
{
	 Employee p[5];
	 char str[20]; //�޸� �����Ҵ� ���� ����
	 int i;
	 int sum;
	 double avg;
	 
	 for ( i = 0; i < 2 ; i++)
	 {
		 printf("��� ���̵� : ");
		 scanf("%d", &p[i].id);
		 printf("��� �̸� : ");
		 scanf("%s", str);
		 printf("�Ѵ� �޿� : ");
		 scanf("%d", &p[i].salary);
		 p[i].name = (char*)malloc(strlen(str) + 1); // strlen(str) +1 ���ڿ� ���̸� ��� �ι��ڵ� �����ϰ� ������� �Ҵ�, malloc�� �Լ��� �μ��� ��, 
		 strcpy(p[i].name, str);
		

	 }
	 
	 for (i = 0; i < 2; i++)
	 {
		 printf("��� ���̵� : %d ��� �̸� :%s �Ѵ� �޿� :%d ", p[i].id, p[i].name, p[i].salary);
	 }
	 sum = 0;
	 for (i = 0; i < 2; i++)
	 {
		 sum += p[i].salary;
		
	 }
	

	 avg = sum / 2.0;
	 printf("�հ�: %d ��� : %.1lf", sum, avg);

	 

	 return 0;
	
	
	 
}

