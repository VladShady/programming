#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;
    double geoMean;

    printf("Введіть перше число: ");
    scanf("%lf", &x);

    printf("Введіть друге число: ");
    scanf("%lf", &y);

    printf("Введіть третє число: ");
    scanf("%lf", &z);

    double modx = fabs(x);
    double mody = fabs(y);
    double modz = fabs(z);

    geoMean = cbrt(modx * mody * modz);

    printf("Середнє геометричне: %lf\n", geoMean);

    return 0;
}