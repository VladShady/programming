#include <stdio.h>

int main() {
    int num;

    printf("Введіть ціле число від 1 до 7: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Понеділок\n");
            break;
        case 2:
            printf("Вівторок\n");
            break;
        case 3:
            printf("Середа\n");
            break;
        case 4:
            printf("Четвер\n");
            break;
        case 5:
            printf("П'ятниця\n");
            break;
        case 6:
            printf("Субота\n");
            break;
        case 7:
            printf("Неділя\n");
            break;
        default:
            printf("Неправильне число. Введіть число від 1 до 7.\n");
            break;
    }

    return 0;
}
