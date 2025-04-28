#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
// <문제> https://www.acmicpc.net/problem/2745
// B진법 표
// 0 1 2 3 4 5 6 7 8 9 A B C D E
// F G H I J K L M N O P Q R S T
// U V W X Y Z (0 = 0, Z = 35)
// 가장 중요한건 예외 처리

int trans(const char oper){
    if (oper >= '0' && oper <= '9') {
        return oper - '0';
    } else if (oper >= 'A' && oper <= 'Z') {
        return oper - 'A' + 10;
    }
    return -1; // 예외 처리
}

int main(){
    char str[37]; // N
    int num = 0; // B 진법
    int result = 0; // 결과 저장하는곳

    scanf("%s %d", str, &num);

    int len = strlen(str); // 구문 길이
    int p = 1; // power 쓰려다가 double<>int 상호작용 오류를 예방하고자 int로 바꿈

    for (int i = 0; i < len; i++) {
        result += trans(str[len - i - 1]) * p;
        p *= num;
    }

    printf("%d\n", result);
    
    return 0;
}
