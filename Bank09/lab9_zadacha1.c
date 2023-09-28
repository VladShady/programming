#include <stdio.h>

int DigitSum(int K) {
    if (K < 10) {
        return K;
    } else {
        int lastDigit = K % 10; 
        int remainingDigits = K / 10; 
        return lastDigit + DigitSum(remainingDigits);
    }
}

int main() {
    int K;
    printf("Введіть ціле число K: ");
    scanf("%d", &K);

    int sum = DigitSum(K);

    printf("Сума цифр числа %d: %d\n", K, sum);

    return 0;
}
