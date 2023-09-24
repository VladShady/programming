#include <stdio.h>

int main() {
    int m, n;

    printf("Введіть кількість рядків: ");
    scanf("%d", &m);
    printf("Введіть кількість стовпців: ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Некоректні розміри матриці.\n");
        return 1;
    }

    double matrix[m][n];

    printf("Введіть елементи матриці %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    printf("Матриця:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    double min_element = matrix[0][0];
    int min_column = 0;

    for (int j = 1; j < n; j++) {
        if (matrix[0][j] < min_element) {
            min_element = matrix[0][j];
            min_column = j;
        }
    }

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
                min_column = j;
            }
        }
    }

    printf("Номер стовпця з мінімальним елементом: %d\n", min_column + 1);

    return 0;
}
