#include <stdio.h>

struct list// 자기 참조 구조체
{
	int num; //데이터를 저장하는 멤버
	struct list* next; //구조체 자신을 가리키는 포인터 멤버
};

int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; //구조체 안에 값 초기화
	struct list* head = &a, * current; //head에서 a의 주소값을 가리킴, current가리키는 값 없다

	a.next = &b; // a.next에 b의 주솟값 대입
	b.next = &c; //b.next에 c의 주솟값 대입

	printf("head ->num : %d\n", head->num); //head(10,0) 에서 num을 출력 '10'
	printf("head -> next -> num : %d\n", head->next->num); //head에서 next(&b)에 있는 값중에 num을 출력'20'

	printf("list all : ");
	current = head; //current(빈값)에 head값을 넣음
	while (current !=NULL) 
	{
		printf("%d    ", current->num); //current 에서 첫번째 num을 가리키는거 출력
		current = current->next; //다음 구조체 변수를 가리키고 
	}
	printf("\n");


	return 0;


}