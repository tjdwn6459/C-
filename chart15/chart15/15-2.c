#include <stdio.h>


// 문자열을 바꿀때 직접적으로 바꾸지않고 연결하는 포인터의 값을 바꾸면 연결상태가 바뀐다
void swap_ptr(char** ppa, char** ppb); // 두 변수의 값을 바꾸고자하는것을 인수로 주고 함수가 그 주소를 간접 참조 한다.

int main(void)
{
	char* pa = "success"; //*pa의 배열 선언
	char* pb = "failure";//*pb의 배열 선언

	printf("pa -> %s , pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);//해당주소의  함수 호출
	printf("pa -> %s , pb -> %s\n", pa, pb);


	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt; //포인터 선언
	pt = *ppa; //pt에 ppa의 주소를 가진 데이터 값이 저장
	*ppa = *ppb;//ppa의  해당데이터에 ppb의 해당데이터 값이 복사
	*ppb = pt; //  pt 에ppb의 해당데이터 값이 저장
	//문자열을 이중포인터로 가져올때 한칸의 배열에 해당하는 값만 가져와도 다가티 차례대로 호출된다
}