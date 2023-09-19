#include <stdio.h>
#include <math.h>

int main()
{
    float z1, z2, x;
    
    printf("Введіть X: ");
    scanf("%f", &x);
    
    float z1_1 = sin(2 * x) + sin(5 * x) - sin(3 * x);
    float z1_2 = cos(x) + 1 - 2 * pow(sin(2 * x), 2);
    
    z1 = z1_1 / z1_2;
    
    z2 = 2 * sin(x);
    
    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);

    return 0;
}
