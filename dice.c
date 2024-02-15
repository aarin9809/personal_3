#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main() {
    int freq[SIZE] = {0};
    int i;

    for(i = 0; i< 10000; i++)
        ++freq[rand() %6];      //주사위를 10000번 던진다. 난수의 값을 6으로 나눈 나머지를 주사위의 면으로 간주하고 해당 면의 빈도를 하나 증가시킨다.

    printf("면의 빈도\n");

    for (i = 0; i< SIZE; i++) {
        printf("%3d %3d \n", i+1, freq[i]);
    }
    return 0;
}