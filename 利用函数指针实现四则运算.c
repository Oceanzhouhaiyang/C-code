//int (*p)(int, int)
//int (*p2[4])(int ,int ) p2[1](x,y)
//int (*(*p3)[4])(int
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("****1 .加法 2. 减法***\n");
	printf("****3. 乘法 4.除法****\n");
	printf("*******0.退出*********\n");
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
	printf("请输入运算方式");
	scanf_s("%d", &input);
	do
	{
		printf("请输入运算的第一个数字");
		scanf_s("%d", &x);
		printf("请输入第二个数字");
		scanf_s("%d", &y);
		if (input > 0 && input < 5)
		{
			ret = (p[input])(x, y);
			printf("结果是%d", ret);
		}
		else if(input>4)
		{
			printf("输入错误请重新输入");
		}
		else
		{
			printf("再见");
		}
		
	} while (input);

}