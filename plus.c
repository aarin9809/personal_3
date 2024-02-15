#include <stdio.h>

int main() {
    int x;
    int y;
    int sum;

    printf("첫번째 정수를 입력하시오:");
    scanf("%d", &x);

    printf("두번째 정수를 입력하시오:");
    scanf("%d", &y);

    sum = x + y;
    printf("두 정수의 합: %d\n", sum);
    
    return 0;
}