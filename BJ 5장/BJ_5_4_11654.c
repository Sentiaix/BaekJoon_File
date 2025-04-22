#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char cv;

    scanf("%c", &cv);
    // ASCII 코드에는 각 문자가 갖는 번호가 있는데, char형에 들어간 문자를 %d로 출력하면 ASCII코드의 번호가 나온다.
    printf("%d\n", cv);

    return 0;
}