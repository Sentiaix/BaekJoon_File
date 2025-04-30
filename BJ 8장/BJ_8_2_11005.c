#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/11005
// B진법 표
// 0 1 2 3 4 5 6 7 8 9 A B C D E
// F G H I J K L M N O P Q R S T
// U V W X Y Z (0 = 0, Z = 35)
// 진법 : n번째 자리의 값에 10^n-1 처리.

// GPT로 풀었음.

void trans(int input, int base, char* result) {
    int stack[100];
    int idx = 0;

    // 10진수 → B진수로 변환 (역순 저장)
    while (input > 0) {
        stack[idx++] = input % base;
        input /= base;
    }

    // stack에 담긴 값을 문자로 변환 (뒤에서부터 출력)
    int resIdx = 0;
    for (int i = idx - 1; i >= 0; i--) {
        if (stack[i] >= 0 && stack[i] <= 9) {
            result[resIdx++] = stack[i] + '0';
        } else {
            result[resIdx++] = (stack[i] - 10) + 'A';
        }
    }

    result[resIdx] = '\0'; // 문자열 종료
}

int main() {
    int number, base;
    char result[100] = {0,};

    scanf("%d %d", &number, &base);
    trans(number, base, result);

    printf("%s\n", result);
    return 0;
}
