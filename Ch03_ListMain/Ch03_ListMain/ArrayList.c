//
//  ArrayList.c
//  Ch03_ListMain
//
//  Created by Kaala on 2023/07/10.
//

#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}

void LInsert(List * plist, LData data)
{
    if(plist->numOfData > LIST_LEN)
    {
        puts("저장이 불가능합니다.");
        return;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;
}

int LFirst(List * plist, LData * pdata) // List의 첫 번째 값 추출하는 메서드
{
    if(plist->numOfData == 0)
        return FALSE;

    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List * plist, LData * pdata)
{
    if(plist->curPosition >= (plist->numOfData)-1) // 더 이상 빼낼 데이터가 없는 경우
        return FALSE;

    (plist->curPosition)++;
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}

LData LRemove(List * plist)
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    for(i=rpos; i<num-1; i++)
        plist->arr[i] = plist->arr[i+1]; // 데이터를 지우고 난 빈칸을 채우기 위해 한 칸씩 당겨줌

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}

int LCount(List * plist)
{
    return plist->numOfData;
}
