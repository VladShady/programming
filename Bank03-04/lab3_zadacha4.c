#include <stdio.h>
#include <math.h>

int main() {
    float a, b, x, c, res;    
    
    printf("Введіть a: ");
    scanf("%f", &a);
    printf("Введіть b: ");
    scanf("%f", &b);
    printf("Введіть x: ");
    scanf("%f", &x);
    printf("Введіть c: ");
    scanf("%f", &c);
    
    if (x < 1 && c != 0) {
        res = a * pow(x, 2) + b / c;
        printf("Випадок 1.\n");
    } else if (x > 1.5 && c == 0) {
        res = (x - a) / pow((x - c), 2);
        printf("Випадок 2.\n");
    } else {
        res = pow(x, 2) / pow(c, 2);
        printf("Випадок 3.\n");
    }
    
    printf("Відповідь: %.2f\n", res);

    return 0;
}