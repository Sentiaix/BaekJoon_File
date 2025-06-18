#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/2231


// function declaration

int get_decomposition_sum(int x);

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(get_decomposition_sum(i) == n){
            printf("%d\n", i);
            return 0;
        }
    }

    // 생성자가 없을 경우
    printf("0\n");
    return 0;
}

// define function

int get_decomposition_sum(int x){
    int sum = x;
    while(x > 0){
        // (x, sum) >> (198, 198) >> (19, 198 + 8) >> (1, 198 + 8 + 9) >> (0, 198 + 8 + 9 + 1) : (0, 216)
        sum += x % 10; // 자릿수 더함
        x /= 10;
    }
    
    return sum;
}