/*�α��� ���α׷�
1.id �� password�� �����ϰ� �����̸��� password.txt�� �����Ѵ�
2.����ü login ������ id, password����� ���� ������ ��Ű��
3.Ű����� �ԷµǴ� id�� pw�����Ͽ� '�α��εǾ����ϴ�.' �Ǵ� 'id�� ã�� �� �����ϴ�.'��� �޼����� ����ϴ� ���α׷�
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
	char res_id[50]; //���̵� �Է� ����  ĭ
	char res_pw[50];//��й�ȣ �Է� ���� ĭ
	


	ifp = fopen("password.txt", "r");
	if (ifp == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�. \n");
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
				printf("�α����� �����߽��ϴ�.");
			}

			else 
			{
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");

			}
		}
		else
		{
			printf("�α��ο� �����߽��ϴ�.");

		}
	
	}

	return 0;


}

