#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n; // number of int vaules
    int arr[100]; // get numbers in this array
    int v; // number to find
    int comp = 0; // get result of searched number

    scanf("%d", &n);

    for(int i = 0; i < n; i++){ // get n gae number
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for(int i = 0; i < n; i++){
        if(arr[i] == v){
            comp += 1;
        }
    }

    printf("%d\n", comp);

    return 0;
}