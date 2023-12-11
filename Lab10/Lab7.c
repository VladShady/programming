#include <stdio.h>
#include <string.h>

int Lab7() {
    char text[1000];
    int plus_count = 0, minus_count = 0, multiply_count = 0;

    printf("Введіть текст: ");
    
    if (fgets(text, sizeof(text), stdin) != NULL) {
        for (int i = 0; i < strlen(text); i++) {
            if (text[i] == '+') {
                plus_count++;
            } else if (text[i] == '-') {
                minus_count++;
            } else if (text[i] == '*') {
                multiply_count++;
            }
        }

        printf("Кількість символів '+' в тексті: %d\n", plus_count);
        printf("Кількість символів '-' в тексті: %d\n", minus_count);
        printf("Кількість символів '*' в тексті: %d\n", multiply_count);
    } else {
        printf("Помилка при введенні тексту.\n");
    }

    return 0;
}