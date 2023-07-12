//
//  main.c
//  Ch03_ListMain
//
//  Created by Kaala on 2023/07/10.
//

#include <stdio.h>
#include "ArrayList.h"


// Question 03-1.
int main(void)
{
    List list;
    int data;
    ListInit(&list);
    
    for(int i=1; i<10; i++)
    {
        LInsert(&list,i); //1-9까지 리스트에 저장
    }
    
    if(LFirst(&list, &data))
    {
        int sum = data;
        while(LNext(&list, &data)){
            sum += data;
        }
        printf("합계 : %d\n",sum);
    }
    
    if(LFirst(&list, &data))
    {
        if(data % 2 == 0 || data % 3 == 0)
            LRemove(&list);
        while(LNext(&list, &data)){
            if(data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }
    
    if(LFirst(&list, &data))
    {
        printf("데이터 : %d ",data);
        while(LNext(&list, &data)){
            printf("%d ",data);
        }
        printf("\n\n");
    }
}


//int main(void)
//{
//    // ArrayList 생성 및 초기화
//    List list;
//    int data;
//    ListInit(&list);
//
//    // 5개의 데이터 저장
//    LInsert(&list, 11);
//    LInsert(&list, 11);
//    LInsert(&list, 22);
//    LInsert(&list, 22);
//    LInsert(&list, 33);
//
//    // 저장된 데이터 전체 출력
//    printf("현재 데이터의 수 : %d \n",LCount(&list));
//
//    if(LFirst(&list, &data))
//    {
//        printf("%d ",data);
//        while(LNext(&list, &data))
//            printf("%d ", data);
//    }
//    printf("\n\n");
//
//    // 숫자 22 탐색해 모두 삭제
//    if(LFirst(&list, &data))
//    {
//        if(data == 22)
//            LRemove(&list);
//
//        while(LNext(&list, &data)){
//            if(data == 22)
//                LRemove(&list);
//        }
//    }
//
//    // 삭제 후 남은 데이터 전체 출력
//    printf("현재 데이터의 수 : %d \n",LCount(&list));
//
//    if(LFirst(&list, &data)){
//        printf("%d ",data);
//        while(LNext(&list, &data))
//            printf("%d ", data);
//    }
//    printf("\n\n");
//    return 0;
//}
