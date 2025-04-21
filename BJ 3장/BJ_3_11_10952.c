#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a, b;

    while(1){
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0){
            break;
        }

        printf("%d\n", a+b);
    }

    // 위 코드 대신 아래 코드를 쓸 수 있다.
    // while(scanf("%d %d", &a, &b) == 2){
    //     if(a == 0 && b == 0){
    //         break;
    //     }
        
    //     printf("%d\n", a+b);
    // }

    return 0;
}