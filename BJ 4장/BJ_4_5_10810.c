#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// <조건> n개 바구니에, ?만큼의 n개의 공이 있음
// <조건> 바구니에 1회 1개씩 공을 넣음. (기존에 공이 있으면 교체함)
// <조건> m회에 걸쳐서 바구니에공을 넣음
// <입력> 첫 입력에 바구니 n개와 m회를,
// <입력> 다음 입력부터 시작 바구니, 끝 바구니, 공의 번호를 입력받음
// <출력> 각 바구니에 들어갔던 공의 갯수


int main(){
    int n, m; //n개의 바구니(공) m 회의 입력
    int i,j,k; // i: 시작 바구니, j: 끝 바구니, k: 공의 번호

    scanf("%d %d", &n, &m);

    int arr[n];

    // 동적 행렬 초기화.
    //VScode(under C99.ver)에서는 동적행렬 초기화를 ={0,}같이 할 수 없음.
    for(int a = 0; a < n; a++){
        arr[a] = 0;
    }

    // 공 입력
    for(int a = 0; a < m; a++){
        scanf("%d %d %d", &i, &j, &k);
        
        for(int b = i - 1; b < j; b++){
            arr[b] = k;
        }
    }

    // 공 번호 출력
    for(int a = 0; a < n; a++){
        printf("%d ", arr[a]);
    }
    
    printf("\n");

    return 0;
}