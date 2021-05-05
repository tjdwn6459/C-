#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;  //변수 선언과 초기화 

	swap(&a, &b); //swap를 실행 하기 위해서는 함수를 호출 
	printf("a : %d, b:%d\n", a, b);

	return 0;
}

// 주소가 가리키는 데이터를 바꾸는 것
void swap(int* pa, int* pb)//(주솟값을 전달 해주기에 동일한값의 형태로 입력을 받아야 한다)
{
	int temp;  //a, b에 들어 있는 값을 저장하기 위해서 임시적으로 변수를 선언
	temp = *pa;//temp에 pa가 가리키는 값 (10)저장
	*pa = *pb;  //pa가 가리키는 변수에 ( )pb가 가리키는 변수의 값(20) 저장 ->(20)
	*pb = temp;//pb가 가리키는 값에 (20) temp의 값(10)저 장
}