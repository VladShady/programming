#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        int currSum = 0; 

        for (int j = 1; j <= i; j++) {
            currSum += j; 
        }

        sum += currSum;
    }

    printf("Відповідь: %i\n", sum);

    return 0;
}
