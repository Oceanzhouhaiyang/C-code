#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<malloc.h>
typedef int STDateType;
typedef struct Stack
{
	STDateType* a;
	int top;
	int capacity;
}St;
void StackPush(St* ps, STDateType X);
void StackPop(St* ps, STDateType X);
STDateType StcakTop(St* ps);
void StackInit(St* ps);
int Stacksize(St* ps);
void StackPrint(St* ps);
bool StackEmpty(St* ps);

