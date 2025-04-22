#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 만 있다.


int main(){
    int case_times; // case(sequence) 반복 횟수
    scanf("%d", &case_times);

    // 사실 test case의 최댓값이 1,000이라 char_repeat[1000]로 해도 되는데, 그냥 이렇게 하고싶었습니다.
    // 가독성 쓰레기네
    int char_repeat[case_times]; // 문자열 반복 횟수
    char str[case_times][20]; // 문자열 받기

    for(int i = 0; i < case_times; i++){
        scanf("%d %s", &char_repeat[i], &str[i]);

        for(int j = 0; j < strlen(str[i]); j++){ // 문자열 길이만큼 반복
            for(int k = 0; k < char_repeat[i]; k++){ // 문자열 중 순서대로 char_repeat만큼 반복출력.
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}