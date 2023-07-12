//
//  main.c
//  HanoiTower
//
//  Created by Kaala on 2023/06/14.
//

#include <stdio.h>

// A B C 기둥이 있고 원판들이 일단 모두 A에 있는 상태로 시작
/*
 * 이해
    현재 기둥, 목적지 기둥, 나머지 기둥 세 기둥을 잘 염두해두고 생각해보자
 
 * 순서
     1. 작은 원반 n-1개 까지 A에서 B로 이동
     2. 큰 원반 n(가장 아래 원반) 1개를 A에서 C로 이동
     3. 작은 원반 n-1개까지 B에서 C로 이동
 */


int HanoiTower(int num, char from, char other, char to)
{
    if(num == 1) //맨 위 원반 1
    {
        printf("move 1 from %c to %c\n",from,to); // 출력하고 메서드 종료
    }
    else
    {
        HanoiTower(num-1, from, to, other); // HanoiTower(num: num-1, from: from, other: to, to: other)
        printf("move %d from %c to %c\n",num,from,to);
        HanoiTower(num-1, other, from, to); // HanoiTower(num: num-1, from: other, other: from, to: to)
    }
    return 0;
}

/*
 * Function execution sequences (n=2)
 Han(2,a,b,c)
    Han(1,a,c,b)
        "move 1 from a to b"
    "move 2 from a to c"
    Han(1,b,a,c)
        "move 1 from b to c"
 
 --------------------------------------
 
 * Function execution sequences (n=3)
 
 Han(3,a,b,c)
    Han(2,a,c,b)
        Han(1,a,b,c)
            "move 1 from a to c"
        "move 2 from a to b"
        Han(1,c,a,b)
            "move 1 from c to b"
    "move 3 from a to c"
    Han(2,b,a,c)
        Han(1,b,c,a)
            "move 1 from b to a"
        "move 2 from b to c"
        Han(1,a,b,c)
            "move 1 from a to c"
 
 --------------------------------------
 */


int main(void)
{
    HanoiTower(2, 'A', 'B', 'C');
    printf("===================\n");
    HanoiTower(3, 'A', 'B', 'C');
    printf("===================\n");
    HanoiTower(4, 'A', 'B', 'C');
    printf("===================\n");
    HanoiTower(5, 'A', 'B', 'C');
    return 0;
}
