#include <stdio.h>
#include <math.h>

int main() {
    double a; 
    double r;
    double area;
    double pi = 3.14;

    printf("Введіть сторону квадрата a: ");
    scanf("%lf", &a);

    r = a / 2.0;

    area = pi * pow(r, 2);

    printf("Площа вписаного кола: %.2f\n", area);

    return 0;
}
