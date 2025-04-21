#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n,j,k;
    
    scanf("%d", &n);

    for(int i = 1; i < n + 1; i++){
        for(k = 0; k < n - i; k++){
            printf(" ");
        }
        for(j = 0; j < n - k; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}