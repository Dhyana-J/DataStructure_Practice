//
//  main.c
//  RecursiveFactorial
//
//  Created by Kaala on 2023/06/13.
//

#include <stdio.h>

int RecursiveFactorial(int num)
{
    if (num == 0) return 1;
    else return num * RecursiveFactorial(num-1);
}

int main(void)
{
    int result = RecursiveFactorial(4);
    printf("result : %d\n",result);
    return 0;
}
