#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int num,a,b;

    scanf("%d", &num); //테스트 하는 횟수

    for (int i = 0; i < num; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", (a+b));
    }
    

    return 0;
}