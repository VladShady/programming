#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float res1, res2;

    printf("Введіть значення x: ");
    scanf("%f", &x);

    printf("Введіть значення y: ");
    scanf("%f", &y);
    
    float res1_p1 = pow((cos(x) - cos(y)), 2);
    float res1_p2 = pow((sin(x) - sin(y)), 2);

    res1 = res1_p1 - res1_p2;
    
    float res2_p1 = -4 * pow(sin((x - y) / 2), 2);
    float res2_p2 = cos(x + y);    

    res2 = res2_p1 * res2_p2;

    printf("Результат за першою формулою: %f\n", res1);
    printf("Результат за другою формулою: %f\n", res2);

    return 0;
}