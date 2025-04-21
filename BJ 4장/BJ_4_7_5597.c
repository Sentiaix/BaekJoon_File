#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 미출석 학생 번호 출력하기
// 학생 수(배열크기)는 30
// <입력> 출석번호
// <출력> 미출석한 학생의 번호를 오름차순으로 출력

int main(){
    int student_list[30] = {0};
    int attend_list[30] = {0};

    // 배열을 {0,0,1,2,3,4,..30}으로 정렬
    for(int i = 0; i < 30; i++){
        student_list[i] = i + 1;
    }

    // 학생 번호 입력

    //idea N을 입력받으면 바로 student_List에서 n을 빼
    // @로 받고 student_list[@] = @; 
    for(int i = 0; i < 28; i++){
        int t;
        scanf("%d", &t);

        for(int j = 0; j < 30; j++){
            if(student_list[j] - t == 0){
                student_list[j] -= t;
            }
        }
    }
    
    // 미출석 학번 출력
    for(int i = 0; i < 30; i++){
        if(student_list[i] != 0){
            printf("%d\n", student_list[i]);
        }
    }

    return 0;
}