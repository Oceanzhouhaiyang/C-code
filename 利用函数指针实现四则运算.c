//int (*p)(int, int)
//int (*p2[4])(int ,int ) p2[1](x,y)
//int (*(*p3)[4])(int
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("****1 .�ӷ� 2. ����***\n");
	printf("****3. �˷� 4.����****\n");
	printf("*******0.�˳�*********\n");
}
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
int main()
{
	menu();
	int(*p[5])(int, int) = { NULL,add,sub,mul,div };
	int x=0;
	int y=0;
	int input = 0;
	int ret = 0;
	printf("���������㷽ʽ");
	scanf_s("%d", &input);
	do
	{
		printf("����������ĵ�һ������");
		scanf_s("%d", &x);
		printf("������ڶ�������");
		scanf_s("%d", &y);
		if (input > 0 && input < 5)
		{
			ret = (p[input])(x, y);
			printf("�����%d", ret);
		}
		else if(input>4)
		{
			printf("�����������������");
		}
		else
		{
			printf("�ټ�");
		}
		
	} while (input);

}