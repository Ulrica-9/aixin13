//#include <stdio.h>
//int main()
//{
//	int a;
//	double d, e;
//	e = 2.54;
//	//����������ڵ�λת��
//	printf("������ߴ糤��");
//	scanf("%d", &a);
//	e = e * a;
//	printf("�����λ����(��λ:CM):\n");
//	printf("%.5lf",e);
//	return 0;
//
//
////}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 5;
//	b = 7;
//	printf("a=%d b=%d\n",a, b);
//	printf("������:\n");
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n",a, b);
//
////}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = -1;
//	b = 2;
//	a = a / 2;
//	printf("%d \n", a);
//}
//#include <stdio.h>
//int main()
//{
//	int i, num,count;
//	count = 0;
//	scanf_s("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);

//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 0;
//	b = 20;
//	c = 30;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	a = !a;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//}
//������
//#include <stdio.h>
//#include <string.h>
//int 	depart(int n)
//{
//	int num = 0;
//	if (1 == n)
//	{
//		return 1;
//	}
//	else
//	{
//	num=depart(n - 1) * 2 + 2;
//	return num;
//		
//
//	}
//}
//int main()
//{
//	int a;
//	a = 10;
//	
//
//	printf("%d\n", depart(a));
//	return 0;
//
//}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>	
#include <windows.h>
void menu2(void)
{
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t**********>>>>>>��ӭ�ٴ�ʹ��<<<<<<*********\n");
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t******�����⣿��ϵ������QQ:1074885784******\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}
void start(int a)
{
	char name[30][10] = { "�����","����","��֥��","������","�ƿ�־","����","�׽ຣ","������","������","�²���","Ǯ���","�����","������","������","���־","����","����","���ĳ�","�ܸ���","��˼��","��½","����","������","���֥","������","��С��","�ܽ�","��Ӧ��","���","����" };
	int num,i;
	int j;
	
	for (i = 1; i <= a; i++)
	{
		num = rand() % 30 + 1;//��ȡ1-30��ѧ��
	
        printf("\t\t\t\t\t��%d��------>ѧ��β��Ϊ:%-2d��----->%-2sͬѧ\n", i, num,name[num-1]);

	}
	menu2();
}
void menu(void)
{
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t**********>>>>>>����С����<<<<<<***********\n");
	printf("\t\t\t\t\t*******************************************\n");
	printf("\t\t\t\t\t*              1-��ʼ  0-����             *\n");
}
void text(void)
{
	int num = 0;
	int a = 0;
	do {
		    menu();
			printf("\t\t\t\t\t��ȷ���Ƿ�ʼִ��:");
			scanf_s("%d", &num);
			switch (num)
			{
			case 1:
				while (1)
				{
					printf("\t\t\t\t\t��������Ҫ��ȡ������:");
					scanf_s("%d", &a);
					if (a <= 5)
					{
						break;
					}
					else
					{
						printf("\t\t\t\t\tֵ����Ԥ�ڣ�����������С�ڻ����5������,��ֹ�ظ�.\n");
					}
				}
				
				printf("\t\t\t\t\t���ڳ�ȡ���Ե�");
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				Sleep(500);
				start(a);
				break;
			case 0:
				printf("\t\t\t\t\t�����˳��������Ե�.");
				printf("-");
				Sleep(1000);
				printf("-");
				Sleep(1000);
				printf("-");
				Sleep(1000);
				system("cls");
				break;
			default:
				printf("\t\t\t\t\t����ֵ�޷����飬�����Ƿ���ȷ��\n");
				printf("\t\t\t\t\t������ת");
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				system("cls");
			}		
	} while (num);
}
int main()
{
	int num;
	//����ʱ���
	srand((unsigned int)time(NULL));
	text();
	return 0;
}