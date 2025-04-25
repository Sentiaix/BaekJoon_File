#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/2941
// str을 입력받고 대체된 크로아티아 알파벳이 있다면 몇개인지 출력한다.
// č = c= / ć = c- / dž = dz= / đ = d- / lj = lj / nj = nj / š = s= / ž = z=
// 원래 코드에서는 c=랑 c-랑 구분해서 증가시켰지면 간소화를 위해 c and - or =면 증가로 고침
// numOf_word 변수를 2칸(3칸)짜리 문자를 묶어서 한 번만 증가시키는 느낌으로 for문 전체에 넣음 (마지막 else 불필요해짐)

// 발견된 문제 : z=랑 dz=랑 어떻게 해결할 것인가 = d + - 인지 d + z + = 인지로 고침
// ASCII값 합으로 계산하므로 'a' + 'c' = 'b' + 'b'인데 어떻게 할 것인가. = 이것도 논리회로 써서 고침

int main(){
    char str[101];
    int numOf_word = 0; // 크로아티아 알파벳 갯수 저장

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')){// 글자가 c면 = 또는 -가 따라오는지 검사
            i++; //두 개의 str을 읽었으니 하나를 더 카운트시켜주기.
        }else if(str[i] == 'd'){ // dz= 와 d- 읽어냄
            if(str[i + 1] == 'z' && str[i + 2] == '='){
                i += 2; //3개의 str을 읽었으니 자동 i++ 에 2개를 더 카운트.
            } else if(str[i + 1] == '-'){
                i++;
            }
        }else if((str[i] == 'n' || str[i] == 'l') && str[i + 1] == 'j'){ // lj, nj 읽어냄
            i++;
        }else if((str[i] == 's' || str[i] == 'z') && str[i + 1] == '='){ // s=, z= 읽어냄
            i++; 
        }
        numOf_word++;
    }

    printf("%d\n", numOf_word);

    return 0;
}