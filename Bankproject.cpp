
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
			
			printf("[°èÁÂ °³¼³]\n");
			printf("°èÁÂ ID: ");
			scanf("%d", &make[a].id);
			printf("ÀÌ ¸§:");
			scanf("%s", &make[a].name);
			printf("ÀÔ±Ý¾×:");
			scanf("%d", &make[a].money);
			printf("ÀÜ ¾×: %d\n", make[a].money);

			break;
		}
	printf("\n");
}

void add()
{
	account* ptr = &make[100];

	for (int i = 0; i < MAXNAME; i++) {

		int add = make[i].money;


		printf("°í°´ID:");
		scanf("%d", &make[a].id);
		printf("ÀÔ±Ý¾×: ");
		scanf("%d", &make[a].money);
		printf("ÀÜ ¾×: %d\n", make[a].money + add);

		break;
	}printf("\n");

}

void sub()
{
	for (int i = 0; i < MAXNAME; i++) {

		int sub = make[i].money;


		printf("°í°´ID: %d\n", *make[i].id);
		printf("Ãâ±Ý¾×: ");
		scanf("%d", &make[i].money);
		printf("ÀÜ ¾×: %d\n", make[i].money - sub);

		break;
	}printf("\n");
}



int main()
{

	while (n < 5)
	{
		printf("----- MENU -----\n");
		printf("1. °èÁÂ°è¼³\n");
		printf("2.   ÀÔ ±Ý  \n");
		printf("3.   Ãâ ±Ý  \n");
		printf("4.°èÁÂÁ¤º¸ ÀüÃ¼ Ãâ·Â\n");
		printf("5. ÇÁ·Î±×·¥ Á¾·á \n");
		printf("¼±ÅÃ :");
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
				printf("°í°´¸í: %s", make[i].name);
				printf("ÀÜ ¾×: %d\n", make[i].money);
				break;
			}
		case 5:
			break;
		}

	}

}