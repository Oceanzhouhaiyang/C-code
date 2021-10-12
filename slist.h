#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode*next;
}SLTNote;
void SLTPushBack(SLTNote** pplist, SLTDateType x);
void STLPrint(SLTNote* plist);
void SLTPushFront(SLTNote** pplist, SLTDateType x);
void SLTPopFront(SLTNote** pplist);
void SLTPophBack(SLTNote** pplist);
void SLTFind(SLTNote* pplist, SLTDateType x);
void SLTInsert(SLTNote** pplist, SLTNote* pos, SLTDateType x);
void SLTerase(SLTNote** pplist, SLTNote* pos);