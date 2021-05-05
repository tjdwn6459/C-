#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary; //0번방의 주소
	int *pb = pa + 3; //3번방의 주소


	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; //1증가시켜서pa는 1번방 pb는 3번방
	printf("pb - pa : %u\n", pb - pa); //3-1

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa); //pa < pb가 true니까 *pa 출력 
	else printf("%d\n", *pb);



	return 0;//프로그램 종료 
}