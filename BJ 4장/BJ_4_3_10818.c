#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];
    int temp = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){ // bubble sort 
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];

            }
        }
    }


    return 0;
}