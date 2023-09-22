#include <stdio.h>

int main() {
    double distance; // Відстань в кілометрах
    double time;     // Час в годинах
    double speed;    // Швидкість в км/год

    // Запит відстані та часу від користувача
    printf("Введіть відстань (км): ");
    scanf("%lf", &distance);
    printf("Введіть час (год): ");
    scanf("%lf", &time);

    // Розрахунок швидкості
    speed = distance / time;

    // Перевірка, чи порушено правила дорожнього руху
    if (speed <= 60.0) {
        printf("Водій не порушив правил дорожнього руху.\n");
    } else {
        printf("Водій порушив правила дорожнього руху.\n");
    }

    return 0;
}