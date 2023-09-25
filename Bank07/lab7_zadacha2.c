#include <stdio.h>
#include <string.h>

int main() {
    char binary[100]; 
    int i = 0;
    
    printf("Введіть двійкове число: ");
    scanf("%s", binary);

    while (binary[i] == '0') {
        i++;
    }

    for (; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    printf("Результат: %s\n", binary);

    return 0;
}
