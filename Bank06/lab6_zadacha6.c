#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, M;

    printf("Введіть кількість маршрутів: ");
    scanf("%d", &N);
    printf("Введіть кількість зупинок: ");
    scanf("%d", &M);

    if (N <= 0 || M <= 0) {
        printf("Некоректні дані.\n");
        return 1;
    }

    int schedule[N][M];
    for (int i = 0; i < N; i++) {
        printf("Введіть розклад для маршруту %d (0 - не зупиняється, 1 - зупиняється):\n", i + 1);
        for (int j = 0; j < M; j++) {
            scanf("%d", &schedule[i][j]);
        }
    }

    bool noConflict[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            noConflict[i][j] = true;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (schedule[i][k] == 1 && schedule[j][k] == 1) {
                    noConflict[i][j] = false;
                    noConflict[j][i] = false;
                    break;
                }
            }
        }
    }

    printf("Маршрути, на яких не зустрінеться жодна пара автобусів:\n");
    for (int i = 0; i < N; i++) {
        bool hasConflict = false;
        for (int j = 0; j < N; j++) {
            if (i != j && !noConflict[i][j]) {
                hasConflict = true;
                break;
            }
        }
        if (!hasConflict) {
            printf("Маршрут %d\n", i + 1);
        }
    }

    return 0;
}
