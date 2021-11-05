#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
typedef  int STDDateType;
typedef struct SlistNode
{
	STDDateType date;
	struct SlistNode* next;
}ST;
void STPushBack(ST** phead, STDDateType x);
void STPrint(ST* phead);
void STPushFront(ST** phead, STDDateType x);
void STPopBack(ST** phead);
void STPopFront(ST** phead);
ST* STFind(STDDateType x);
void STInsert(ST** phead,ST*pos,STDDateType x);
void STErase(ST** phead, ST* pos);
