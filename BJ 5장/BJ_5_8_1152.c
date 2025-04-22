#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 입력에서 %[^<조건>]s 로 입력받는 경우, 특정 조건을 만족할 때 까지 문자열을 받습니다.
// ^은 비트연산자와 관계가 없으며, 정규표현식(Regex)에 대해 참고하시길 바랍니다.
// https://hamait.tistory.com/342 참고

int main(){
    char str[1000000];
    int count = 0;

    scanf("%[^\n]", &str);

    int i = 0;

    // str 시작이 space 라면, 다음 칸을 읽도록 함. 또 다음칸이 space면 계속 한 칸씩 이동.
    // 즉, str 시작 후 단어가 나올때까지 진행.
    while(str[i] == ' '){
        i++;
    }

    for(; str[i] != '\0'; i++){ //변수 선언 없이, str에서 EOF가 아닐때 반복(= EOF면 중단)
        // 시작 이후, 단어 마지막에 space를 만나면 단어의 끝으로 인식.
        if(str[i] == ' '){
            count++;

            // 또 공백이 오면 단어가 올 때 까지 스킵.
            while(str[i] == ' '){
                i++;
            }
        }
    }

    // 마지막에서 공백을 읽은게 아니라면, 마지막은 단어로 끝났으니 1개 추가.
    if(str[i - 1] != ' '){
        count++;
    }

    printf("%d\n", count);

    return 0;
}
// 아래는 GPT - 4o가 만든 프로그램. 잘 작동함
// #include <stdio.h>
// #include <ctype.h>

// int main(void) {
//     char str[1000001];
//     int i = 0;
//     int in_word = 0;   // 현재 단어 안에 있는지 여부
//     int count = 0;     // 단어 수

//     // 입력: 개행 전까지의 모든 문자 읽기
//     if (!fgets(str, sizeof(str), stdin)) {
//         return 0;
//     }

//     // 문자열 끝까지 순회
//     while (str[i] != '\0') {
//         if (!isspace((unsigned char)str[i])) {
//             // 공백이 아닌 문자를 만나면 단어 안으로 진입
//             if (in_word == 0) {
//                 in_word = 1;
//                 count++;
//             }
//         } else {
//             // 공백 문자를 만나면 단어 밖으로 나감
//             in_word = 0;
//         }
//         i++;
//     }

//     printf("%d\n", count);
//
//     return 0;
//     }
