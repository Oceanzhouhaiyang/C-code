#include"list.h"
LD* Buylist(LTDatetype x)
{
	LD* newnode = (LD*)malloc(sizeof(LD));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;
}
LD* ListInit()
{
	LD* plist = Buylist(0);
	plist->next = plist;
	plist->prev = plist;
	return plist;
}
void ListPushBack(LD* plist, LTDatetype x)
{
	LD* tail = plist->prev;
	LD*newnode=Buylist(x);
	newnode->prev = tail;
	newnode->next = plist;
	plist->prev = newnode;
	tail->next = newnode;
}
void ListPrint(LD* plist)
{
	LD* cur = plist->next;
	while (cur != plist)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
}
void ListPushFront(LD* plist, LTDatetype x)
{
	LD* newnode = Buylist(x);
	LD* first = plist->next;
	newnode->next = first;
	newnode->prev = plist;
	plist->next = newnode;
	first->prev = newnode;
}
void ListPopFront(LD* plist)
{
	assert(plist);
	assert(plist->next != plist);
	LD* first = plist->next;
	LD* second = first->next;
	second->prev = plist;
	plist->next = second;
	free(first);
	first = NULL;

}
void ListPopBack(LD* plist)
{
	assert(plist);
	assert(plist->next != plist);

	LD* tail = plist->next;
	LD* prev = tail->prev;

	prev->next = plist;
	plist->prev = prev;

	free(tail);
	tail = NULL;
}
LD* ListFind(LD* plist, LTDatetype x)
{
	assert(plist);
	LD* cur = plist->next;
	while (cur != plist)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(LD* pos, LTDatetype x)
{
	LD* newnode = Buylist(x);
	LD* prev = pos->prev;
	newnode->prev = prev;
	newnode->next = pos;
	prev->next = newnode;
	pos->prev = newnode;

}
void ListErase(LD* pos)
{
	LD* prev = pos->prev;
	LD* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}