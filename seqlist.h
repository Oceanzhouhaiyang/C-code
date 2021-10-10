#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef int SqdDateType;
typedef struct Seqlist
{
	SqdDateType* a;
	int size;
	int capacity;
}Seqlist;
void SeqListInit(Seqlist* ps);
void SeqListPushBack(Seqlist* ps,SqdDateType x);
void SeqListprint(Seqlist* ps);
void SeqListPushFront(Seqlist* ps, SqdDateType x);
void SeqListPopBack(Seqlist* ps);
void SeqListPopFront(Seqlist* ps);
void SeqListInsert(Seqlist* ps, int pos, SqdDateType x);