#include <stdio.h>

struct list// �ڱ� ���� ����ü
{
	int num; //�����͸� �����ϴ� ���
	struct list* next; //����ü �ڽ��� ����Ű�� ������ ���
};

int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; //����ü �ȿ� �� �ʱ�ȭ
	struct list* head = &a, * current; //head���� a�� �ּҰ��� ����Ŵ, current����Ű�� �� ����

	a.next = &b; // a.next�� b�� �ּڰ� ����
	b.next = &c; //b.next�� c�� �ּڰ� ����

	printf("head ->num : %d\n", head->num); //head(10,0) ���� num�� ��� '10'
	printf("head -> next -> num : %d\n", head->next->num); //head���� next(&b)�� �ִ� ���߿� num�� ���'20'

	printf("list all : ");
	current = head; //current(��)�� head���� ����
	while (current !=NULL) 
	{
		printf("%d    ", current->num); //current ���� ù��° num�� ����Ű�°� ���
		current = current->next; //���� ����ü ������ ����Ű�� 
	}
	printf("\n");


	return 0;


}