#include <stdio.h>

int Lab2()
{
    float v1, v2, s, t, distance;

    printf("Введіть швидкість першого автомобіля: ");
    scanf("%f", &v1);

    printf("Введіть швидкість другого автомобіля: ");
    scanf("%f", &v2);

    printf("Введіть початкову відстань між ними: ");
    scanf("%f", &s);

    printf("Введіть час: ");
    scanf("%f", &t);

    float distance1 = v1 * t;
    float distance2 = v2 * t;
    
    distance = distance1 + distance2;

    printf("Кінцева відстань між автомобілями: %.2lf км\n", distance);

    return 0;
}