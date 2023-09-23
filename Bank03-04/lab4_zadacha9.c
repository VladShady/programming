#include <stdio.h>

int calculateNthTerm(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return calculateNthTerm(n - 1) + calculateNthTerm(n - 2);
    }
}

int main() {
    int n;

    printf("Введіть n (n > 2): ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("n повинно бути більше 2.\n");
    } else {
        int result = calculateNthTerm(n);
        printf("%d-й член послідовності: %d\n", n, result);
    }

    return 0;
}
