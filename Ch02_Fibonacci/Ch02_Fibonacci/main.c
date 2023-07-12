//
//  main.c
//  Fibonacci
//
//  Created by Kaala on 2023/06/13.
//

#include <stdio.h>

int Fibonacci(int num)
{
    if(num <= 1) return 0;
    else if(num == 2) return 1;
    else return Fibonacci(num-2)+Fibonacci(num-1);
}

int main(void)
{
    for(int i=0; i<=14; i++){
        printf("%d ",Fibonacci(i));
    }
    printf("\n");
    
    return 0;
}
