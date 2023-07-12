//
//  main.c
//  Ch03_List&Struct
//
//  Created by Kaala on 2023/07/11.
//

#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"


void addNameCardToList(List* list, char * name, char * phone)
{
    LInsert(list, MakeNameCard(name, phone));
}


// Question 03-2 리스트의 활용
int main(void)
{
    List list;
    NameCard* nameCard;
    ListInit(&list);
    
    // 1. 총 3명의 전화번호 정보를, 앞서 우리가 구현한 리스트에 저장
    addNameCardToList(&list, "홍길동", "01011111111");
    addNameCardToList(&list, "김삼순", "01013131313");
    addNameCardToList(&list, "장철수", "01050505050");
    addNameCardToList(&list, "도우너", "11111");
    addNameCardToList(&list, "고길동", "22222");
    addNameCardToList(&list, "둘리", "99999");
    
    //    nameCard = MakeNameCard("홍길동", "01011111111");
    //    LInsert(&list, nameCard);
    //    nameCard = MakeNameCard("김삼순", "01013131313");
    //    LInsert(&list, nameCard);
    //    nameCard = MakeNameCard("장철수", "01050505050");
    //    LInsert(&list, nameCard);
    
    
    // 2. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보 출력
    if(LFirst(&list, &nameCard))
    {
        if(NameCompare(nameCard, "김삼순") == 0)
        {
            ShowNameCardInfo(nameCard);
        }
        
        while(LNext(&list, &nameCard))
        {
            if(NameCompare(nameCard, "김삼순") == 0)
            {
                ShowNameCardInfo(nameCard);
                break;
            }
        }
    }
    
    
    // 3. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 전화번호 정보 변경하기
    if(LFirst(&list, &nameCard))
    {
        if(NameCompare(nameCard, "김삼순") == 0)
            ChangePhoneNum(nameCard, "01000000000");
        
        while(LNext(&list, &nameCard))
            if(NameCompare(nameCard, "김삼순") == 0)
            {
                ChangePhoneNum(nameCard, "01000000000");
                break;
            }
    }
    
    
    // 4. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보 삭제하기
    if(LFirst(&list, &nameCard))
    {
        if(NameCompare(nameCard, "홍길동") == 0
           || NameCompare(nameCard, "둘리") == 0)
        {
            nameCard = LRemove(&list);
            free(nameCard);
        }

        while(LNext(&list, &nameCard))
            if(NameCompare(nameCard, "홍길동") == 0
               || NameCompare(nameCard, "둘리") == 0)
            {
                nameCard = LRemove(&list);
                free(nameCard);
                break;
            }
    }
    
    
    // 5. 끝으로 남아있는 모든 사람의 전화번호 정보 출력하기
    printf("\n현재 데이터의 수 : %d \n",LCount(&list));
    
    if(LFirst(&list, &nameCard))
    {
        ShowNameCardInfo(nameCard);
        
        while(LNext(&list, &nameCard))
            ShowNameCardInfo(nameCard);
    }
    
    printf("\n");
    
    
    
}



//int main(void)
//{
//    List list;
//    Point compPos;
//    Point * ppos;
//
//    ListInit(&list);
//
//    // 데이터 4개 저장
//    ppos = (Point*)malloc(sizeof(Point));
//    SetPointPos(ppos, 2, 1);
//    LInsert(&list, ppos);
//
//    ppos = (Point*)malloc(sizeof(Point));
//    SetPointPos(ppos, 2, 2);
//    LInsert(&list, ppos);
//
//    ppos = (Point*)malloc(sizeof(Point));
//    SetPointPos(ppos, 3, 1);
//    LInsert(&list, ppos);
//
//    ppos = (Point*)malloc(sizeof(Point));
//    SetPointPos(ppos, 3, 2);
//    LInsert(&list, ppos);
//
//
//    // 저장된 데이터의 출력
//    printf("현재 데이터의 수: %d \n", LCount(&list));
//
//    if(LFirst(&list, &ppos))
//    {
//        ShowPointPos(ppos);
//
//        while(LNext(&list, &ppos))
//            ShowPointPos(ppos);
//    }
//    printf("\n");
//
//    // xpos가 2인 모든 데이터 삭제
//    compPos.xpos = 2;
//    compPos.ypos = 0;
//
//    if(LFirst(&list, &ppos))
//    {
//        if(PointComp(ppos, &compPos)==1)
//        {
//            ppos=LRemove(&list);
//            free(ppos);
//        }
//
//        while(LNext(&list, &ppos))
//        {
//            if(PointComp(ppos, &compPos)==1)
//            {
//                ppos=LRemove(&list);
//                free(ppos);
//            }
//        }
//    }
//
//    // 삭제 후 남은 데이터 전체 출력
//    printf("현재 데이터의 수: %d \n", LCount(&list));
//
//    if(LFirst(&list, &ppos))
//    {
//        ShowPointPos(ppos);
//
//        while(LNext(&list, &ppos)) // 다른 구조체로 바꾸려 변수 주소 전달
//            ShowPointPos(ppos); // 구조체 자체에 접근하기 위해 구조체 전달
//    }
//    printf("\n");
//
//    return 0;
//}
