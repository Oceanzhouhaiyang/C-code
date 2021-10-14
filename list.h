#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int LTDatetype;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDatetype data;
}LD;
LD* ListInit();
void ListPushBack(LD* plist, LTDatetype x);
void ListPrint(LD* plist);
void ListPushFront(LD* plist, LTDatetype x);
void ListPopBack(LD* plist);
void ListPopFront(LD* plist);
LD* ListFind(LD* plist, LTDatetype x);
void ListInsert(LD* pos, LTDatetype x);
void ListErase(LD* pos);