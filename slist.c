#include"slist.h"
void STLPrint(SLTNote* plist)
{
	SLTNote* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
			cur=cur-> next ;
	}
	printf("NULL\n");
}
SLTNote* SLTNoteBuy(SLTDateType x)
{
	SLTNote* newnote = (SLTNote*)malloc(sizeof(SLTNote));
	newnote->data = x;
	newnote->next = NULL;
	return newnote;
}


void SLTPushBack(SLTNote**pplist, SLTDateType x)
{
	SLTNote* newnote = SLTNoteBuy(x);
	if (*pplist == NULL)
	{
		*pplist = newnote;
	}
	else
	{
		SLTNote* tail = *pplist;
		while (tail->next != NULL)
		{
			tail->next;
		}
		tail->next = newnote;
	}
	
}
void SLTPushFront(SLTNote** pplist, SLTDateType x)
{
	SLTNote* newnote = SLTNoteBuy(x);
	newnote->next = *pplist;
	*pplist = newnote;
}
void SLTPopFront(SLTNote** pplist)
{
	SLTNote* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}
void SLTPophBack(SLTNote** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLTNote* tail = *pplist;
		SLTNote* pre = NULL;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		pre->next = NULL;
	}
}
void SLTFind(SLTNote** pplist, SLTDateType x)
{
	SLTNote* cur = *pplist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;

}
void SLTInsert(SLTNote** pplist, SLTNote* pos, SLTDateType x)
{
	if (pos == *pplist)
	{
	  SLTPushFront(pplist, x);
	}
	else
	{
		SLTNote* newnote = SLTNoteBuy(x);
		SLTNote* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnote;
		newnote->next = pos;
	}
}
void SLTerase(SLTNote** pplist, SLTNote* pos)
{
	if (pos = *pplist)
	{
		SLTPopFront(pplist);
	}
	else
	{
		SLTNote* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}