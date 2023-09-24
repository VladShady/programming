#include <stdio.h>

int main() {
    int n;

    printf("Введіть кількість елементів у послідовності: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Некоректна кількість елементів.\n");
        return 1;
    }

    double a[n];

    printf("Введіть %d дійсних чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                break;
            }
        }
    }

    printf("Кількість членів, які входять у послідовність більше одного разу: %d\n", count);

    return 0;
}
