#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;    
    
    printf("Введіть a: ");
    scanf("%f", &a);
    printf("Введіть b: ");
    scanf("%f", &b);
    printf("Введіть c: ");
    scanf("%f", &c);

    float res1 = (a + b + c) / 2;
    
    float res2 = sqrt((1 / (pow(a, 2) + 1)) + 1 / (pow(b, 2) + 1) + 1 / (pow(c, 2) + 1));
    
    printf("res1: %f\n", res1);
    printf("res2: %f\n", res2);
    
    res1 > res2 ? printf("Мінімальне число: %.2f\n", res2) : printf("Мінімальне число: %.2f\n", res1);

    return 0;
}