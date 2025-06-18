#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/24313

int main(){
    int a1, a0; //a1 > 함수 f에 속하는 1차항의 계수, a0 > 함수 f에 속하는 상수항    
    int c; // 비교군에 속하는 상수항
    int n0; // n값중 가장 작은 n0값
    int chk = 1; // 조건식 불만족시 0
    // O(g(n)) = {f(n) | 모든 n ≥ n0에 대하여 f(n) ≤ c × g(n)인 양의 상수 c와 n0가 존재한다}
    // 예: 7n + 7, c = 8, n0 = 1 이면, f(1) = 14, c(g(1)) = 8

    scanf("%d %d", &a1, &a0); // f(n) 입력
    scanf("%d", &c); // g(n) = n에 곱할 상수 c
    scanf("%d", &n0); // n의 최솟값
    // f(n) ≤ c × g(n) >>> n(i) + a0 <= c * n(i); (단, i >= n0)

    for (int n = n0; n <= 100; n++) {
        int fn = a1 * n + a0;
        int cn = c * n;

        if (fn > cn) {
            chk = 0;
            break;
        }
    }
    printf("%d\n", chk);

    return 0;
}