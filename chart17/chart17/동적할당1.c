//동적할당 //
//void *malloc(size_t size)만큼의 크기만큼 메모리를 할당하고 성공하면 
//할당한메모리의 첫번째 주소리턴 실패하면 null리턴


//사이즈가 정해진 배열 복사
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[4] = {1,2,3,4 }; //크기가 4인 배열 선언 
	int* pArr; //int형을 가리키는 vhdlsxj pArr


	pArr = (int*)malloc(sizeof(int) * 4);
	//pArr이라는 포인터를 통해서 저장공간을 확보 
	// 1)malloc의 형태의 반환형이 void라 (int *)로 형변환
	//2)포인터가가리키는 저장공간의 크기를  알기위해 자료형 타입을 바이트로 연산
	//3) arr[4]가 가진 크기의 똑같은 메모리를 할당하기 위해 곱하기 4를 한다 (복사)

	if (pArr == NULL)
	{
		printf("error");
	}
	for (int i = 0; i < 4; i++)
	{
		pArr[i] = arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", pArr[i]);
	}

	free(pArr);
	//할당한메모리 해제 안그러면 메모리 누수 발생


	return 0;
}