#include"stack.h"
void StackInit(St* ps)
{
	ps->top = 0;
	ps->a =(STDateType*) malloc(sizeof(STDateType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	ps->capacity = 4;
}
void StackPush(St* ps, STDateType x)
{
	if (ps->capacity = ps->top)
	{
		STDateType* temp = (STDateType*)realloc(ps->a, ps->capacity * sizeof(STDateType) * 2);
		if (temp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity = ps->capacity * 2;
	}
	else
	{
		ps->a[ps->top] = x;
		ps->top = ps->top + 1;
	}
}
void StackPop(St* ps, STDateType X);
void StackPrint(St* ps)
{
	assert(ps);
	while (ps->top > 0)
	{
		printf("%d", ps->a[ps->top - 1]);
		ps->top--;
	}
}
STDateType StcakTop(St* ps)
{
	assert(ps);
	assert(ps->a);
	return ps->a[ps->top - 1];
}
void StackPop(St* ps, STDateType X)
{
	assert(ps);
	assert(ps->top>0);
	ps->top - 1;
}
int Stacksize(St* ps)
{
	return ps->top;
}
bool StackEmpty(St* ps)
{
	assert(ps);
	return ps->top == 0;
}
