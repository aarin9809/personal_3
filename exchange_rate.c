#include <stdio.h>

int main() {

    //필요한 변수
    //환율, 원화, 환율을 적용한 돈

    double rate;    //환율
    double usd;     //환율을 적용한 돈
    int krw;        //원화

    printf("환율을 입력하시오: ");
    scanf("%lf", &rate);

    printf("원화를 입력하세요: ");
    scanf("%d", &krw);
    
    usd = krw / rate;

    printf("원화 %d원은 %lf달러 입니다.\n", krw, usd);

    return 0;

}