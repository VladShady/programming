#include <stdio.h>

int main()
{
    float feetHeight;
    
    printf("Введіть зріст в футах: ");
    scanf("%f", &feetHeight);
    
    printf("Зріст в сантиметрах: %.2f", feetHeight * 30.48);

    return 0;
}
