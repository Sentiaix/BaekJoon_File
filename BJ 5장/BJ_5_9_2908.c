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

    int sum1[3] = {0};
    int sum2[3] = {0};

    // 타입 변환. 사실 이 작업 필요없음.. 그냥 다음 Result1,2 변수에 바로 변환하면서 넣어도 되는데
    // 가로로 코드가 길어지는건 도무자 볼 수 없다.
    for(int i = 0; i < 3; i++){
        sum1[i] = (int)(first_num[i] - 48);
        sum2[i] = (int)(second_num[i] - 48);
    }

    int Result1 = sum1[2] * 100
                + sum1[1] * 10
                + sum1[0];

    int Result2 = sum2[2] * 100
                + sum2[1] * 10
                + sum2[0];

    // 성공했었네.. 결국 성공.
    printf("%d\n", Result1 > Result2 ? Result1 : Result2);

    return 0;
}