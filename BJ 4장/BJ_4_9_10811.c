#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 참조: https://www.acmicpc.net/problem/10811
//
//N개의 오름차순으로 된 개체를 A부터 B까지 역순으로 내림차순 정렬하고자 함.
// <입력> n개의 바구니와, 반복할 횟수 m
// <입력> 바꿀 첫 바구니(i)와 끝 바구니(j) m회
// <출력> 바꾸어진 바구니의 순서

int main(){
    int n,m; //n: 바구니 수, m: 반복횟수
    int i,j; //i: 시작 바구니, j: 끝 바구니

    scanf("%d %d", &n, &m);
    
    int arr[n]; // 바구니

    // 바구니 내용물 초기화{1,2,3,4,..,n}
    for(int a = 0; a < n; a++){
        arr[a] = a + 1;
    }

    // 조건을 <입력>받음.
    for(int a = 0; a < m; a++){
        scanf("%d %d", &i, &j);

        int first = i - 1; //시작값
        int end = j - 1; //끝값

        while(first < end){ // 순서를 뒤집음.
            int temp = arr[first];
            arr[first] = arr[end];
            arr[end] = temp;

            first++; //시작값을 뒤 칸으로
            end--; //끝값을 앞 칸으로
        }
    }

    for(int a = 0; a < n; a++){
        printf("%d ", arr[a]);
    }

    printf("\n");

    return 0;
}