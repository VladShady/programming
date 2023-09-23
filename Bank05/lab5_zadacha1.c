#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введіть a: ");
    scanf("%d", &a);
    
    printf("Введіть b: ");
    scanf("%d", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    *ptrA *= 2; 
    *ptrB /= 2; 

    printf("Значення a після збільшення: %d\n", a);
    printf("Значення b після зменшення: %d\n", b);

    return 0;
}
