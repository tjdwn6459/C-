#include <stdio.h>

void print_char(char ch, int count); //입력문자

int main(void)
{


	print_char('@', 5); //전달을 문자가 하니까 타입을 맞춰 문자

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	//return; //return문만 씀 실직적인 인수는 안써서 받진 않음 
	

}