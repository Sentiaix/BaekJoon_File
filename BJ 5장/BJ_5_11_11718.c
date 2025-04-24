#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/11718

int main(){
    char str[101];

    // fgets에 대한 이해 <참고> https://blog.naver.com/tipsware/221326391483
    // fgets(변수명, 입력받을 str 크기, 파일)
    // ex) char str[ ]; fgets(str, 64, stdin); # str변수에 63글자를 입력받음.
    // fgets의 stdin 변수가 FILE * 형식이므로 가능함.
    // fgets가 포인터라고?...
    while(fgets(str, sizeof(str), stdin) != NULL){ // 이 구문에 대해 좀 더 알아봐야 할듯..
        printf("%s", str);
    }


    return 0;
}