#include <stdio.h>
int main(void) {
    // 국어, 영어, 수학 학점 변수 선언 및 초기화
    int kor = 3, eng = 5, math = 4;
    
    // 전체 학점을 저장할 변수 선언 및 저장
    int total = kor + eng + math;
    
    // 각 과목의 점수를 저장할 변수 선언 및 초기화
    double score_kor = 3.8, score_eng = 4.4, score_math = 3.9;
    
    // 점수의 평균을 저장할 변수 선언 및 저장
    double avg = (score_kor + score_eng + score_math) / 3.0;
    
    // 전체 학점이 10학점 이상이고 점수 평균이 4.0보다 크면 1, 아니면 0 출력
    if (total >= 10 && avg > 4.0)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
}