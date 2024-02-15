#include <stdio.h>

int main() {

    int x = 10, y = 20;
    int *p;

    p = &x;
    printf("p = %d\n", p);      //x값의 주소
    printf("*p = %d\n\n", *p);  //*p는 p를 가리키고 있으니 당연히 x값의 주소를 보고있는것.

    p = &y;
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);

    return 0;
}