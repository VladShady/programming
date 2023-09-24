#include <stdio.h>

int main() {
    int m, n;

    printf("Введіть кількість рядків: ");
    scanf("%d", &m);
    printf("Введіть кількість стовпців: ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Некоректні розміри таблиці.\n");
        return 1;
    }

    double B[m][n];

    printf("Введіть елементи таблиці B %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    printf("Таблиця B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf\t", B[i][j]);
        }
        printf("\n");
    }

    double C[n];

    for (int j = 0; j < n; j++) {
        double min_element = B[0][j];

        for (int i = 1; i < m; i++) {
            if (B[i][j] < min_element) {
                min_element = B[i][j];
            }
        }

        C[j] = min_element;
    }

    printf("Масив C:\n");
    for (int j = 0; j < n; j++) {
        printf("%.2lf\t", C[j]);
    }
    printf("\n");

    return 0;
}
