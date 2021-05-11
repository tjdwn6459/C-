#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{

	FILE* fp; //파일 포인터(버퍼(하드디스크에 있는 데이터의 정보 저장)에 있는 주소를 저장하기에 데이터를 읽어올 수 있다)

	fp = fopen("a.txt", "r"); //메모리에 스트링 파일을 만들어지면서 파일구조체를 통해 데이터를 읽을 수 있다 
	if (fp == NULL) //버퍼에 저장된게 없으면
	{
		printf("파일이 열리지 않습니다.\n");
		return 1;
	}

	printf("파일이 열렸습니다. \n");//파일이 있을시에
	fclose(fp);//파일을 닫아 줘야한다


	return 0;
}
//파일구조체에 버퍼를 가지면 주소를가지는 멤버가 있기에 포인터를 쓸시 데이터를 읽어 올 수 있다 