#include"list.h"
void test()
{
	LD* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushFront(plist, 3);
	LD* cur = ListFind(plist, 2);
	ListInsert(cur, 100);
	ListErase(cur);
	ListPrint(plist);
}
int main()
{
	test();
	return 0;
}