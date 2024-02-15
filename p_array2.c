#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    printf("a = %u\n", a);
    printf("a + 1 = %u\n", a + 1);
    printf("*a = %d\n", *a);
    printf("*(a+1) = %d\n", *(a+1));
    printf("*a+1 = %d\n", *a+1);

    return 0;
}