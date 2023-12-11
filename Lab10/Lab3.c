#include <stdio.h>

int Lab3()
{
    double distance;
    double time;
    double speed;

    printf("Введіть відстань (км): ");
    scanf("%lf", &distance);
    printf("Введіть час (год): ");
    scanf("%lf", &time);

    speed = distance / time;

    if (speed <= 60.0)
    {
        printf("Водій не порушив правил дорожнього руху.\n");
    }
    else
    {
        printf("Водій порушив правила дорожнього руху.\n");
    }

    return 0;
}