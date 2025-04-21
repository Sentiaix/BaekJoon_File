#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int arr[3];
    int temp, same;
    int i=0;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for(i=0; i<2; i++){ //bubble sort
        for(int j=0; j<2-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    if(arr[0]==arr[1] && arr[1]==arr[2]){ //same all
        printf("%d", (10000+arr[0]*1000));
    } else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) { //same both not all
        if (arr[0] == arr[1] || arr[0] == arr[2]){
            same = arr[0];
        } else{
            same = arr[1];
        }
            printf("%d\n", 1000 + same * 100);
    } else{
        printf("%d\n", arr[2] * 100);
    }
    

    return 0;
}