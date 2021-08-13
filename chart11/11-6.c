#include <stdio.h>

void my_gets(char* str, int size);

int main()
{
	char str[7]; //문자열을 저장할 배열

	my_gets(str, sizeof(str)); //한줄 문자열을 입력하는 함수 
	printf("입력한 문자열 : %s\n", str);


	return 0;
}


void my_gets(char* str, int size)
{

	int ch;  //getchar함수 반환값저장 공간
	int i = 0;

	ch = getchar();   //첫번째 문자

	while ((ch != '\n') && (i < size -1)) //개행이 되지않는다 
	{
		str[i] = ch; //입력한 문자를 배열에 저장
		i++;
		ch = getchar(); //증가후 다음 문자 입력
	}
	str[i] = '\0'; // '\0'은 문자열이라서 그렇지 않으면 쓰레기값이 저장)
}