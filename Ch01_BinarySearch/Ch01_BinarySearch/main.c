//
//  main.c
//  BinarySearch
//
//  Created by Kaala on 2023/06/12.
//

// 윤성우의 자료구조 Binary Search!

#include <stdio.h>

// BS Requirements : Array elements must be sorted before searching
int BSearch(int ar[], int len, int target)
{
    int first = 0;
    int last = len-1;
    int mid;
    int count = 0;
    
    while(first<=last){
        count++; // operation count
        
        mid = (first+last)/2;
        
        if(target == ar[mid])
        {
            return mid;
        }
        else
        {
            if(target < ar[mid])
                last = mid-1; // no needs to search for elements larger than the target
            else
                first = mid+1; // no needs to search for elements smaller than the target
        }
    }
    
    printf("Operation Count : %d\n",count);
    
    return -1; // failed to search target
}

void checkExist(int idx){
    if(idx == -1) printf("Failed to search\n");
    else printf("Target index : %d\n",idx);
}


int main(void)
{
    
    int arr[] = {1,3,5,7,9};
    int idx;
    
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    checkExist(idx);
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
    checkExist(idx);
    
    return 0;
}
