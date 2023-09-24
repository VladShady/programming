#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 100;
    int sequence[n];

    srand(time(NULL));

    printf("Дана послідовність чисел: ");
    for (int i = 0; i < n; i++) {
        sequence[i] = rand() % 1000;
        printf("%d ", sequence[i]);
    }
    printf("\n");

    int max = sequence[0];
    int min = sequence[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (sequence[i] > max) {
            max = sequence[i];
            max_index = i;
        }
        if (sequence[i] < min) {
            min = sequence[i];
            min_index = i;
        }
    }

    int sum = 0;
    int count = 0;

    int start_index = (max_index < min_index) ? max_index : min_index;
    int end_index = (max_index > min_index) ? max_index : min_index;

    for (int i = start_index; i <= end_index; i++) {
        sum += sequence[i];
        count++;
    }

    double average = (double)sum / count;

    printf("Середнє арифметичне чисел між %d та %d: %.2lf\n", min, max, average);

    return 0;
}
