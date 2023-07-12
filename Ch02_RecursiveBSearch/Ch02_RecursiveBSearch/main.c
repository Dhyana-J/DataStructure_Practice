//
//  main.c
//  RecursiveBSearch
//
//  Created by Kaala on 2023/06/13.
//

#include <stdio.h>

int RecursiveBSearch(int ar[], int target, int first, int last)
{
    if(first>last) return -1;

    int mid = (first+last)/2;
    
    if(ar[mid] == target) return mid;
    else if(ar[mid] < target) return RecursiveBSearch(ar, target, mid+1, last);
    else return RecursiveBSearch(ar, target, first, mid-1);
}

int main(void)
{
    int arr[] = {0,1,2,5,8,9};
    int last = sizeof(arr)/sizeof(int)-1;
    int result = RecursiveBSearch(arr, 8, 0, last);
    if(result == -1) printf("Failed to search target\n");
    else printf("arr[%d] = %d\n",result,arr[result]);
    return 0;
}
