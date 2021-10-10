#include"seqlist.h"
void SeqListInit(Seqlist* ps)
{
	 ps->a = NULL;
	 ps->size = 0;
	 ps->capacity = 0;
}
void SeqListCapacityCheck(Seqlist* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = 0;
		if (ps->capacity == 0)
		{
			newcapacity = sizeof(SqdDateType);
		}
		else
		{
			newcapacity = ps->capacity * 2;
		}
		SqdDateType* temp = (SqdDateType*)realloc(ps->a, newcapacity * sizeof(SqdDateType));
		if (temp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = temp;
			ps->capacity = newcapacity;
		}

	}
}
void SeqListPushBack(Seqlist* ps, SqdDateType x)
{
	SeqListCapacityCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListprint(Seqlist* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d", ps->a[i]);
	}
}
void SeqListPushFront(Seqlist* ps, SqdDateType x)
{
	SeqListCapacityCheck(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopBack(Seqlist* ps)
{
	assert(ps->size > 0);
	ps->size --;
}
void SeqListPopFront(Seqlist* ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
void SeqListInsert(Seqlist* ps, int pos, SqdDateType x)
{
	assert(pos < ps->size);
	SeqListCapacityCheck(ps);
	int end = ps->size - 1;
	while (end >= pos - 1)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos - 1] = x;
	ps -> size++;
}