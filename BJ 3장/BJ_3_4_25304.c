#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x,n,a,b;
    int sum = 0;
    //x : total price, n : total num of stuff, a : each stuff price, b : num of each stuff
    //sum : total money

    scanf("%d %d", &x, &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        sum += a * b;
    }
    
    if(x == sum){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    


    return 0;
}