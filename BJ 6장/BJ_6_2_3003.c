#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/3003
// 킹(1), 퀸(1), 룩(2), 비숍(2), 나이트(2), 폰(8)


int main(){
    int arr[6] = {0};

    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d %d %d %d %d %d\n",
            1 - arr[0], //킹 1
            1 - arr[1], //퀸 1
            2 - arr[2], //룩 2
            2 - arr[3], //비숍 2
            2 - arr[4], //나이트 2
            8 - arr[5]); //폰 8

    return 0;
}