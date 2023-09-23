#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть кількість елементів n: ");
    scanf("%d", &n);

    float result = 0.0; 

    printf("Введіть %d дійсних чисел:\n", n);
    for (int i = 1; i <= n; i++) {
        float number;
        scanf("%f", &number);

        if (i % 2 == 1) {
            result += number;
        } else {
            result -= number; 
        }

        if (i == n) {
            result *= pow(-1, n + 1) * number;
        }
    }

    printf("Результат: %.2f\n", result);

    return 0;
}
