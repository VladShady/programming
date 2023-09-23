#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr1, *ptr2, *ptr3;
    int max_length = 100;

    ptr1 = (char *)malloc(max_length * sizeof(char));
    ptr2 = (char *)malloc(max_length * sizeof(char));
    ptr3 = (char *)malloc(max_length * sizeof(char));

    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Помилка виділення пам'яті.\n");
        return 1;
    }

    printf("Введіть рядок 1: ");
    scanf("%s", ptr1);

    printf("Введіть рядок 2: ");
    scanf("%s", ptr2);

    printf("Введіть рядок 3: ");
    scanf("%s", ptr3);

    printf("Рядок 1: %s\n", ptr1);
    printf("Рядок 2: %s\n", ptr2);
    printf("Рядок 3: %s\n", ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
