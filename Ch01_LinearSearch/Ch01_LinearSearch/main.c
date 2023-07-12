//
//  main.c
//  LinearSearch
//
//  Created by Kaala on 2023/06/12.
//


// 윤성우의 열혈 자료구조 첫 프로젝트! LinearSearch!

#include <stdio.h>
int count = 0;

int LSearch(int ar[], int len, int target)
{
    for(int i=0;i<len;i++){
        count++;
        if(ar[i] == target) return i;
    }
    return -1;
}


void checkIdx(int idx)
{
    if(idx == -1) printf("Failed to search\n");
    else printf("Target index : %d\n",idx);
}


int main(void)
{
    int arr[] = {3,5,2,4,9};
    int idx;
    idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
    checkIdx(idx);

    idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);
    checkIdx(idx);
    
    printf("Operation count : %d\n",count);
    return 0;
}
