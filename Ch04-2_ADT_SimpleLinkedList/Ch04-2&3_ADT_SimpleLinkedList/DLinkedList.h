//
//  DLinkedList.h
//  Ch04-2&3_ADT_SimpleLinkedList
//
//  Created by Kaala on 2023/07/21.
//

#ifndef DLinkedList_h
#define DLinkedList_h

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node
{
    LData data;
    struct _node * next;
} Node;

typedef struct _linkedList
{
    Node * head;
    Node * cur;
    Node * before;
    int numOfData;
    int (*comp)(LData d1, LData d2);
} LinkedList;

typedef LinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2));

#endif /* DLinkedList_h */
