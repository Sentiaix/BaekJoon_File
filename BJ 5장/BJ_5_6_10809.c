#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char a = 'a'; // a is 97 on ASCII

    scanf("%s", &str);

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < strlen(str); j++){
            if(str[j] == a){
                printf("%d ", j);
                break;
            }
            if(j == strlen(str) - 1){
                printf("-1 ");
            }
        }
        a++;
    }

    return 0;
}