#include <stdio.h>

int main() {

    int i = 10;
    int *p;

    p = &i;
    printf("i = %d\n", i);

    *p = 20;        // 포인터가 가리키는 변수의 값을 변경할 수 있다.
    printf("i = %d\n", i);

    return 0;
}