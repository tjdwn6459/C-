#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 }; //배열요소 5개(선언)
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };//배열요소 7개(선언)

	print_ary(ary1, 5); //ary1 배열 출력 , 배열요소의 개수(5)전달 
	printf("\n");//개행
	print_ary(ary2, 7);//ary2 배열 출력, 베열요소의 개수 (7)전달

	return 0;//프로그램 종료
}

void print_ary(int* pa, int size) //배열이름을 전달해주기때문에 포인트로 사용한다 
{
	int i;

	for (i = 0; i < size; i++) //입력받은 값으로for문 실행한다
	{
		printf("%d", pa[i]); //값 출력
	}


}