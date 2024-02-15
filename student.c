#include <stdio.h>

#define STUDENTS 5

int get_average(int scores[], int size);

int main() {
    int socres[STUDENTS] = {1,2,3,4,5};
    int avg;    // 평균

    avg = get_average(socres, STUDENTS);
    printf("평균은 %d입니다.\n", avg);

    return 0;
}

int get_average(int scores[], int size) {
    int i;
    int sum = 0;

    for(i = 0; i < size; i++)
        sum += scores[i];

    return sum / size;
}