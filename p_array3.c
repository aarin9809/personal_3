#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    int *p;

    p = a;
    printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
    printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);

    p[0] = 6;
    p[1] = 7;
    p[2] = 8;

    printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
    printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);
}