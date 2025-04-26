#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/1316
// 1. 연속성 구분 2. 알파벳 기억 3. 그룹단어가 아님을 인식 4. 3번 수행 후 ToF에 맞춰 var값을 조정
// TC설정은 아직 안해도 될 것으로 보임

// 한번 인식한 알파벳은 chker[]에 저장,
// chker[i][(int)(str[i][j] - 'a')]에서 (int)는 char 자료형을 int 자료형으로 변환,
// (str[i][j] - 'a')는 char값을 int로 바꾸기 전에, 0부터 25번에 해당하는 알파벳과 매치시키기 위해
// 각 문자에 들어있는 알파벳에서 'a'를 빼 char값을 97~122에서 0~25으로 조정

int main(){
    int n = 0;
    char str[100][101]; // 최대 100회 반복, 문자열 길이 최대 100(문자열 종료('\0'))를 받기 위해 100 + 1로 설정.
    int chker[100][26] = { {0, } }; // 각 str에 알파벳을 확인해야하므로 matrix로 설정
    int word_count = 0;
    int its_wrong = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", str[i]); // <입력조건> 모든 입력은 영소문자

        for(int j = 0; str[i][j] != '\0'; j++){
            // str[i][j] != str[i][j - 1] << 1. 글자의 연속성 구분 (현재 글자가 이전 글자와 다른가?)
            if(str[i][j] != str[i][j - 1] && chker[i][(int)(str[i][j] - 'a')] == 0){
                chker[i][(int)(str[i][j] - 'a')]++; // 2. 알파벳 출현 여부 기억
            }
            // 3. 그룹단어가 아님을 인식
            else if(str[i][j] != str[i][j - 1] && chker[i][(int)(str[i][j] - 'a')] != 0){
                its_wrong++; // 4. 그룹단어가 아니면 wrong변수를 증가시켜 단어 카운트에서 제외.
            }
        }
        if(its_wrong){ // 그룹단어 아님 스택이 차있으면 변수만 초기화하고 아무 행동 X
            its_wrong = 0;
        } else{ // 그룹단어 아님 스택이 0이면 변수 초기화 + 단어 갯수 증가
            its_wrong = 0;
            word_count ++;
        }
    }

    printf("%d\n", word_count);

    return 0;
}