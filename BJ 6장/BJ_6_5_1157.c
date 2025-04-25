#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// <문제> https://www.acmicpc.net/problem/1157
// str을 입력받고 가장 많이 사용된 알파벳을 출력. 단, 가장 많은 횟수의 알파벳이 하나가 아니라면 ? 출력
// 1. string 입력
// 2. str의 개별 char과 알파뱃을 대조 or 알파벳 개수를 확인하고 저장

int main(){
    char str[1000001];
    int chkchar[26] = {0}; // Alphabet은 총 26개. A = 0, B = 1, ... , Z = 26
    int mostused; // 가장 많이 사용된 알파벳의 chkchar의 배열거리를 저장
    int appear_max = 0; //가장 많은 알파벳 사용횟수 저장
    int dup = 0; // 중복 사용 여부 저장

    scanf("%s", str);
    
    // 소문자를 대문자로 바꾸기. ASCII코드에서 대문자 == 소문자 - 32 값이다.
    //string.h 헤더파일을 쓰고 조건문에 i < strlen(str);을 써도 된다. 하지만 그 방법은 색인+길이저장 이여서 별로인듯
    for(int i = 0; str[i] != '\0'; i++){ 
        if(str[i] >= 97 && str[i] <= 122){ //ASCII 코드에서 a~z는 97~122, A~Z는 65~90이다.
            str[i] -= 32;
        }

        // 알파벳 사용 횟수 저장 (Switch 문으로 일일이 저장하려했는데 난 바본가보다..)
        chkchar[str[i] - 65]++; //str[i]의 모든 값은 위 작업으로 대문자 알파벳이다.
    }   // str[i]에 A의 ASCII값을 빼면 A=0, B=1, C=2...

    // 중복사용 char chk
    for(int i = 0; i < 26; i++){
        if(chkchar[i] > appear_max){ // 기존로직 chkchar[i] > 1 은 입력이 abbccc일 때 ?을 출력함. abbcc일때 ?를 출력하도록 수정함
            appear_max = chkchar[i]; // 가장 많이 사용된 알파벳의 출현횟수를 appear_max값에 저장
            mostused = i; //가장 많이 사용한 알파벳의 번호(A = 0, B = 1...)를 저장
            dup = 1; // 가장 큰 값이 혼자면 1을 반환
        }else if(chkchar[i] == appear_max){
            dup = 0; // 가장 큰 값이 여럿이면 0을 반환
        }
    }
    
    // 결과 출력
    if(!dup){ // 가장 많이 등장한 알파벳이 혼자가 아니라면 ?를 출력.
        printf("?\n");
    } else{
        printf("%c\n", mostused + 65); // 해당 알파벳의 ASCII를 호출하기 위해선 'A'의 아스키값을 더해야함
    }

    return 0;
}