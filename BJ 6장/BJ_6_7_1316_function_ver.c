#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test_gruop(const char* word){
    int chker[26] = {0};

    for(int i = 0; word[i] != '\0'; i++){
        if(i > 0 && word[i] == word[i - 1]){
            continue; // 전에 나온 글자와 현재 글자가 동일하0면 다음 내용은 무시하고 다시 for문으로 돌아감
        }

        if(chker[(int)(word[i] - 'a')]){
            return 0; // 윗 if문이 작동하지 않으면 = 전 글자와 현 글자가 다르면 0을 반환
        }
        chker[(int)(word[i] - 'a')] = 1;
    }
    return 1; // 그룹단어임이 맞으면 1을 반환
}

int main(){
    int n; // 반복횟수
    char str[101]; // 총 100개의 글자 입력. +1은 EOF의 자리임
    int word_count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", str);
        if(test_gruop(str)){
            word_count++;
        }
    }
    
    printf("%d\n", word_count);

    return 0;
}