#include"stack.h"
void test1()
{
	St ps;
	StackInit(&ps);
	StackPush(&ps, 1);
	printf("%d", StcakTop(&ps));



}
int main()
{
	test1();
	return 0;
}