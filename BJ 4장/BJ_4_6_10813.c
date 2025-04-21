#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// array에 각 번호에 해당하는 숫자가 부여돼있음.
// 공 2개 선택 후 바꾸기.
// <입력> 처음에 array의 크기와(N) 바구니를 바꿀 총 횟수(M)를 줌
// <입력> 바꿀 바구니들을 M회 입력 (%d %d)
// <출력> 바꾼 바구니 번호를 출력

int main(){
    int n,m; //n: 배열의 크기(바구니의 양), m: 바꾸는 횟수
    int i,j; //i <=> j 서로 바꿔질 바구니

    scanf("%d %d", &n, &m);

    int arr[n];

    // 동적 배열 arr[n]을 각 n+1번째 숫자로 대입
    for(int a = 0; a < n; a++){
        arr[a] = a + 1;
    }

    // 바꿀 바구니들을 입력받고, 서로 교체
    for(int a = 0; a < m; a++){
        scanf("%d %d", &i, &j);

        int temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    // 바구니에 있는 index를 <출력>
    for(int a = 0; a < n; a++){
        printf("%d ", arr[a]);
    }

    printf("\n");

    return 0;
}