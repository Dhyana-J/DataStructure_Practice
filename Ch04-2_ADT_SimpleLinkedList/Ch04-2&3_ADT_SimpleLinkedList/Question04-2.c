//
//  LinkedReadWithDummy.c
//  Ch04-2&3_ADT_SimpleLinkedList
//
//  Created by Kaala on 2023/07/21.
//

// Question04-2. Dummy Node 적용하기


//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef struct _node
//{
//    int data;
//    struct _node * next;
//} Node;
//
//
//int main(void)
//{
//    Node * head = NULL;
//    Node * tail = NULL;
//    Node * cur = NULL;
//
//    Node * newNode = NULL;
//    int readData;
//
//    // 더미노드 설정
//    head = (Node*)malloc(sizeof(Node));
//    head->data = 0;
//    head->next = NULL;
//    tail = head;
//
//
//    // 데이터 입력 받는 과정
//    while(1)
//    {
//        printf("자연수 입력: ");
//        scanf("%d",&readData);
//        if(readData < 1)
//            break;
//
//        // 노드의 추가과정
//        newNode = (Node*)malloc(sizeof(Node));
//        newNode->data = readData;
//        newNode->next = NULL;
//
//        if(head->next == NULL)
//            head->next = newNode;
//
//        tail->next = newNode;
//        tail = newNode;
//    }
//    printf("\n");
//
//
//    // 입력 받은 데이터의 출력과정
//    printf("입력 받은 데이터의 전체출력 \n");
//    if(head->next == NULL)
//        printf("저장된 자연수가 존재하지 않습니다. \n");
//    else
//    {
//        cur = head->next;
//        printf("%d ",cur->data);
//        while(cur->next != NULL)
//        {
//            cur = cur->next;
//            printf("%d ",cur->data);
//        }
//    }
//    printf("\n\n");
//
//
//    // 메모리 해제과정
//    if(head == NULL)
//        return 0;
//    else
//    {
//        Node * delNode = head->next;
//        Node * delNextNode = delNode->next;
//
//        printf("%d 삭제\n",delNode->data);
//        free(delNode);
//
//        while(delNextNode != NULL)
//        {
//            delNode = delNextNode;
//            delNextNode = delNextNode->next;
//
//            printf("%d 삭제\n",delNode->data);
//            free(delNode);
//        }
//    }
//    return 0;
//}

