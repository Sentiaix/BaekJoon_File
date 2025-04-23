#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char first_num[4] = {0}; // 각 번호는 세자리수, NULL 문자까지 받아야하므로 +1
    char second_num[4] = {0}; // str 배열은 받고싶은 크기 +1하는게 나음.

    // str을 배열에 받을 때, 배열 하나에 넣는게 아니라 배열 전체를 사용하기 때문에,
    // 배열 전체를 호출해야한다. 그래서 주소연산자 말고 그냥 배열명(파라미터)을 호출한다.
    // arr(= arr[0])에는 주소 element가 들어있는데, 이때문에 그냥 적어서 호출이 가능하다.
    // https://velog.io/@leavemealone/scanf-배열-입 << 참고
    scanf("%s %s", first_num, second_num);

    char temp = first_num[0];
    first_num[0] = first_num[2];
    first_num[2] = temp;

    char temp1 = second_num[0];
    second_num[0] = second_num[2];
    second_num[2] = temp1;

    char sum1[4] = {first_num[0], first_num[1], first_num[2]}; //이것도 일단 임시로 만든거임

    printf("%s\n", sum1);// 이거 테스트용 출력임

    printf("%s\n", first_num > second_num ? first_num : second_num);

    return 0;
}