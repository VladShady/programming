#include <stdio.h>
#include <math.h>

int main() {
    float x, y;    
    
    printf("Введіть x: ");
    scanf("%f", &x);
    printf("Введіть y: ");
    scanf("%f", &y);
    
    fabs(x) + fabs(y) <= 1 ? printf("Належить") : printf("Не належить");

    return 0;
}