#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n, x;
    int arr[99999];

    scanf("%d %d", &n, &x);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < x){
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}