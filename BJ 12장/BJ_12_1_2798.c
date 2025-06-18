#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 동적 메모리 할당

// <문제>: https://www.acmicpc.net/problem/2798
/*카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다. 카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임이다. 블랙잭은 카지노마다 다양한 규정이 있다.

한국 최고의 블랙잭 고수 김정인은 새로운 블랙잭 규칙을 만들어 상근, 창영이와 게임하려고 한다.

김정인 버전의 블랙잭에서 각 카드에는 양의 정수가 쓰여 있다. 그 다음, 딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓는다. 그런 후에 딜러는 숫자 M을 크게 외친다.

이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다. 블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.

N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.*/
// 입력: 첫 줄에 카드 수 N과 목푯값 M이 주어짐. 둘쨋 줄에 카드에 쓰인 수가 입력됨.
// 출력: 가능한 가장 목푯값에 가까운 카드의 합을 출력. (단, 합이 M을 초과하면 안 됨.)

int main(){
    int n,m; // 카드 수 n, 목푯값 m
    int* card; // 카드의 숫자
    int sum = 0; // 가장 근접한 합산값

    // 카드 수 N, 목푯값 M 입력
    scanf("%d %d", &n, &m);
    card = (int*)malloc( n * sizeof(int) ); // 동적메모리 할당

    for(int i = 0; i < n; i++){
        scanf("%d", card + i);
    }

    int tmp_sum = 0; // 비교를 위한 임시 합

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                tmp_sum = card[i] + card[j] + card[k]; // 임시 합산값
                if(tmp_sum <= m && sum < tmp_sum){
                    // 새로운 합이 m(목푯값)을 넘지 않고 가장 근접했던 sum값보다 크다면, 그 수가 sum이 됨
                    sum = tmp_sum;
                }
                if(sum == m) break;
            }
        }
    }
    
    printf("%d\n", sum);

    return 0;
}