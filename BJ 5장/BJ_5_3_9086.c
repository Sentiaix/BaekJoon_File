#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen 사용하기 위함

int main(){
    int num;
    scanf("%d", &num);

    char str[num][1000];
        
    for(int i = 0; i < num; i++){
        scanf("%s", &str[i]);
    }

    for(int i = 0; i < num; i++){ //vvv 구문 해석 : strlen(str[i])로 i번째 문장의 길이를 추적, 길이 - 1만큼 앞으로 이동한 값을 출력.
        printf("%c%c\n", str[i][0], str[i][strlen(str[i]) - 1]);
    }


    return 0;
}