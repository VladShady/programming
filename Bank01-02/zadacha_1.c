#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;
    double geoMean, sum, product;

    printf("Введіть перше число: ");
    scanf("%lf", &x);

    printf("Введіть друге число: ");
    scanf("%lf", &y);

    printf("Введіть третє число: ");
    scanf("%lf", &z);

    double modx = fabs(x);
    double mody = fabs(y);
    double modz = fabs(z);
    
    sum = x + y + z;
    product = x * y * z;
    geoMean = cbrt(modx * mody * modz);

    printf("Середнє геометричне: %.2f\n", geoMean);
    printf("Сума: %.2f\n", sum);
    printf("Добуток: %.2f\n", product);

    return 0;
}
