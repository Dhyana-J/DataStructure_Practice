//
//  main.c
//  Ch03_ADT
//
//  Created by Kaala on 2023/07/10.
//

//ADT(Abstract Data Type)

#include <stdio.h>

// Wallet 자료형 정의
typedef struct _wallet {
    int coin100Num;
    int bill5000Num;
} Wallet;

//Wallet의 ADT (구체적이 아닌 추상적으로 기능이나 연산을 나열)
int TakeOutMoney(Wallet *pw, int coinNum, int billNum);
int PutMoney(Wallet *pw, int coinNum, int billNum);


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
