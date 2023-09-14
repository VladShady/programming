#include <stdio.h>

int main() {
    float radius;
    const float pi = 3.14;

    printf("Введіть радіус круга: ");
    scanf("%f", &radius);

    double length = 2 * pi * radius;

    double area = pi * radius * radius;

    printf("Довжина кола з радіусом %.2f: %.2f\n", radius, length);
    printf("Площа круга з радіусом %.2f: %.2f\n", radius, area);

    return 0;
}