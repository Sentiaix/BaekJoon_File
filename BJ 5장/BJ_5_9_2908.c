#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char first_num[4] = {0}; // 각 번호는 세자리수, NULL 문자까지 받아야하므로 +1
    char second_num[4] = {0}; // str 배열은 받고싶은 크기 +1하는게 나을듯..

    //배열
    scanf("%s %s", &first_num, &second_num);

    char temp = first_num[0];
    first_num[0] = first_num[2];
    first_num[2] = temp;

    temp = second_num[0];
    second_num[0] = second_num[2];
    second_num[2] = temp;

    printf("%s\n", first_num > second_num ? first_num : second_num);

    return 0;
}