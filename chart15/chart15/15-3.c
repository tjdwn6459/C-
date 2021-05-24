#include <stdio.h>


//포인터 배열의 값을 출력하는 함수
void print_str(char** pps, int cnt); // 반환값없음, void 포인터 매개변수 지정

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; //포인터 배열선언
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);//count사이즈 측정
	print_str(ptr_ary, count);//함수 호출

	return 0;


}
void print_str(char** pps, int cnt) //입력 값은 포인터 두개를 써야한다
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);//pps[i]는 *ptr_ary의 배열을 가리키고 배열안에 있는 원소들의 값을 하나씩 출력한다 
	}
}