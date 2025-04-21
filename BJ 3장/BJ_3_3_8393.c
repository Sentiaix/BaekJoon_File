  #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n;
    int temp=0;

    scanf("%d", &n);
    
    if(n>=1 && n<=10000){ //입력값 범위를 정해준 건 BOJ에서 그 값만 넣는다는 뜻임.
        for(int i = 0; i < n; i++){
                temp = temp + (i+1);
        }
    }

    printf("%d\n", temp);

    return 0;
}