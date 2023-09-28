#include <stdio.h>
#include <stdarg.h>

long long CalculateExpression(int n, ...) {
    va_list args;
    va_start(args, n);

    long int result = 1;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        result *= sign * num;
        sign *= -1;
    }

    va_end(args);

    return result;
}

int main() {
    int n;
    printf("Введіть натуральне число n (4 < n < 10): ");
    scanf("%d", &n);

    if (n < 5 || n >= 10) {
        printf("Помилка: n має бути в межах (4 < n < 10).\n");
        return 1;
    }

    int a[n];
    printf("Введіть %d цілих чисел a1, a2, ..., an: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long result = CalculateExpression(n, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);

    printf("Результат виразу: %lld\n", result);

    return 0;
}
