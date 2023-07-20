//
//  Question04-1.c
//  Ch04-1_LinkedList_Concept
//
//  Created by Kaala on 2023/07/20.
//

/** Question 04-1. 새 노드를 LinkedList 꼬리가 아닌 머리에 추가한다.
 * 기존에는 3, 2, 7 ,8 을 추가하고 5를 추가하면 3 -> 2 -> 7 -> 8 -> 5 모양이 되었다.
 * 이번에는 5 -> 8 -> 7 -> 2 -> 3 모양이 되도록 머리에 추가해보자.
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} Node;

int main(void)
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;
    
    Node * newNode = NULL;
    int readData;
    
    // 데이터 입력받는 과정
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d",&readData);
        if(readData < 1) break;
        
        // 노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;
        
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    printf("\n");
    
    
    // 입력 받은 데이터의 출력 과정
    printf("입력 받은 데이터 전체 출력 \n");
    if(head==NULL)
        printf("저장된 자연수가 존재하지 않습니다. \n");
    else
    {
        cur = head;
        printf("%d ",cur->data);
        while(cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ",cur->data);
        }
    }
    printf("\n\n");
    
    
    //메모리 해제과정
    if(head == NULL)
        return 0;
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;
        
        printf("%d 삭제\n",delNode->data);
        free(delNode);
        
        while(delNextNode != NULL)
        {
            delNode = delNextNode;
            delNextNode = delNode->next;
            
            printf("%d 삭제\n",delNode->data);
            free(delNode);
        }
    }
    
    return 0;
    
    
    
}
