/*로그인 프로그램
1.id 와 password를 저장하고 파일이름은 password.txt로 저장한다
2.구조체 login 변수에 id, password멤버에 각각 저장을 시키고
3.키보드로 입력되는 id와 pw를비교하여 '로그인되었습니다.' 또는 'id를 찾을 수 없습니다.'라는 메세지를 출력하는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Login
{
	char id[50];
	char password[50];
};


int main(void)
{
	FILE* ifp;
	struct Login login;
	char id[] = "admin";
	char password[] = "phone";
	int res;
	char ch[50];
	char res_id[50]; //아이디 입력 받을  칸
	char res_pw[50];//비밀번호 입력 받을 칸
	


	ifp = fopen("password.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다. \n");
		return 1;
	}
	
	

	while (1)
	{
		res = fscanf(ifp, "%s%s", login.id,login.password);
		if (res == EOF)
		{
			break;
		}
		
	}
	while (1)
	{
		int res = 0;

		printf("id :  \n");
		scanf("%s", res_id);
		printf("password : ");
		scanf("%s", res_pw);

		if (strcmp(res_id, login.id) == 0)
		{
			if (strcmp(res_pw, login.password) == 0)
			{
				printf("로그인이 성공했습니다.");
			}

			else 
			{
				printf("비밀번호가 틀렸습니다.");

			}
		}
		else
		{
			printf("로그인에 실패했습니다.");

		}
	
	}

	return 0;


}

