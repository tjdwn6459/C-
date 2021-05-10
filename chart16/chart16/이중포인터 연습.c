#include <stdio.h>

int main()
{
	int* ptr1; // 단일 포인터 선언
	int** ptr2; //이중 포인터 선언
	int num = 10; //num의 변수 


	//포인터는 주소를 저장하고 그 주소값에 해당하는 데이터를 찾음
	ptr1 = &num; //ptr에num라는 데이터의 주솟값을 저장
	ptr2 = &ptr1;//ptr2안에 ptr1의 주솟값을 저장

	printf("%d\n", **ptr2); // ptr2안에ptr의 주솟값이 저장 그안에num의 주소값저장 되어있고 그 주솟값이 가리키는 데이터 

	return 0;
	






}