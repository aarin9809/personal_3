#include <stdio.h>

int main() {
    int ch;
    while( (ch = getchar()) != EOF)     //EOF는 컨트롤z다.
        putchar(ch);
    return 0;
}