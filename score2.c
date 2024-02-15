#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
    int scores[SIZE];   //배열 선언
    for(int i=0; i<SIZE; i++) {
        scores[i] = rand() % 100;
    }
    
    for(int i=0; i<SIZE; i++) {
        printf("score[%d]=%d\n", i, scores[i]);
    }

    return 0;
}