#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    double sum = 0.0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("n повинно бути натуральним числом.\n");
        return 1;
    }

    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);

    for (int k = 1; k <= n; k++) {
        sum += (double)k / 2.0 * pow(x, k);
    }

    printf("Відповідь: %.2lf\n", sum);

    return 0;
}
