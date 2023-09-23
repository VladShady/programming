#include <stdio.h>
#include <math.h>

int main() {
    int n; 
    printf("Введіть кількість елементів n: ");
    scanf("%d", &n);

    double x;
    printf("Введіть число x: ");
    scanf("%lf", &x);

    double a; 
    double sum = 0.0; 
    int count = 0; 

    printf("Введіть %d дійсних чисел:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%lf", &a);
        sum += a;
        double cos_value = cos(sum);

        if (cos_value == x) {
            count++;
        }
    }

    printf("Число %.2lf зустрічається %d разів\n", x, count);

    return 0;
}
