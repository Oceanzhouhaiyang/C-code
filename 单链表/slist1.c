#include"slist.h"
ST* Buy(STDDateType x)
{
	ST* newnode = (ST*)malloc(sizeof(ST));
	newnode->next = NULL;
	newnode->date = x;
	return newnode;
}
void STPushBack(ST** phead, STDDateType x)
{
	ST* newnode = (ST*)malloc(sizeof(ST));
	newnode->next = NULL;
	newnode->date = x;
	if ((*phead) == NULL)
	{
		(*phead) = newnode;
	}
	else
	{
		ST* tail = (*phead);
		while (tail->next!= NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void STPrint(ST* phead)
{
	ST* cur = phead;
	while (cur!= NULL)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}
void STPushFront(ST** phead, STDDateType x)
{
	ST*newnode=Buy(x);
	newnode->next = (*phead);
	(*phead) = newnode;
}
void STPopBack(ST** phead)
{
	if (*phead == NULL)
	{
		return;
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		(*phead) = NULL;
	}
	else
	{
		ST* prev = NULL;
		ST* tail = (*phead);
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev -> next = NULL;
	}
}
void STPopFront(ST** phead)
{
	if (*phead == NULL)
	{
		return;
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		(*phead) = NULL;
	}
	else
	{
		ST* cur = (*phead)->next;
		free(*phead);
		(*phead) = cur;
	}
}