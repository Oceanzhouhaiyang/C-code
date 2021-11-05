#include"slist.h"
void test1()
{
	ST* plist = NULL;
	STPushBack(&plist, 1);
	STPushBack(&plist, 2);
	STPushBack(&plist, 3);
	STPushFront(&plist, 0);
	STPopFront(&plist);
	STPopBack(&plist);
	STPrint(plist);
}
void main()
{
	test1();
	return 0;
}