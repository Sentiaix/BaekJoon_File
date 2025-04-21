#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if(a>=1 && a<=9){ //입력값을 정해준 건 BOJ에서 그 값만 넣는다는 뜻임.
        for(int i=0; i<9; i++){
            printf("%d * %d = %d\n", a, i+1, a*(i+1));
        }
    }

    return 0;
}