#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"
#include "NameCard.h" // Question 03-2

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100

// typedef int LData;
// typedef Point * LData;
typedef NameCard * LData; // Question 03-2

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;


typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

// LData가 이미 포인터변수이므로 LData * pdata는 더블포인터 변수가 됨
int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif
