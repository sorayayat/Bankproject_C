
#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)


#define MAXID 20
#define MAXNAME 20
int n;
int a;

struct account
{
	int id[MAXID];
	char name[MAXNAME];
	int money;

};

account make[100];
account* ptr[100];

void save()
{
		for (int i = 0; i < MAXNAME; i++)
		{
			
			printf("[���� ����]\n");
			printf("���� ID: ");
			scanf("%d", &make[a].id);
			printf("�� ��:");
			scanf("%s", &make[a].name);
			printf("�Աݾ�:");
			scanf("%d", &make[a].money);
			printf("�� ��: %d\n", make[a].money);

			break;
		}
	printf("\n");
}

void add()
{
	account* ptr = &make[100];

	for (int i = 0; i < MAXNAME; i++) {

		int add = make[i].money;


		printf("��ID:");
		scanf("%d", &make[a].id);
		printf("�Աݾ�: ");
		scanf("%d", &make[a].money);
		printf("�� ��: %d\n", make[a].money + add);

		break;
	}printf("\n");

}

void sub()
{
	for (int i = 0; i < MAXNAME; i++) {

		int sub = make[i].money;


		printf("��ID: %d\n", *make[i].id);
		printf("��ݾ�: ");
		scanf("%d", &make[i].money);
		printf("�� ��: %d\n", make[i].money - sub);

		break;
	}printf("\n");
}



int main()
{

	while (n < 5)
	{
		printf("----- MENU -----\n");
		printf("1. ���°輳\n");
		printf("2.   �� ��  \n");
		printf("3.   �� ��  \n");
		printf("4.�������� ��ü ���\n");
		printf("5. ���α׷� ���� \n");
		printf("���� :");
		scanf("%d", &n);


		switch (n)
		{
		case 1:
			save();
			break;

		case 2:
			add();
			break;


		case 3:
			sub();
			break;

		case 4:

			for (int i = 0; i < MAXNAME; i++)
			{
				printf("ID: %d", make[i].id);
				printf("����: %s", make[i].name);
				printf("�� ��: %d\n", make[i].money);
				break;
			}
		case 5:
			break;
		}

	}

}