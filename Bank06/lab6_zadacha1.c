#include <stdio.h>

int main() {
    int H; 
    int num; 
    int visible_girls = 0; 
    int visible_boys = 0;

    printf("Введіть висоту паркану в сантиметрах: ");
    scanf("%d", &H);

    printf("Введіть кількість дітей: ");
    scanf("%d", &num);

    printf("Введіть ріст кожної дитини (позитивні значення для дівчаток та негативні для хлопчиків):\n");

    for (int i = 0; i < num; i++) {
        int height;
        scanf("%d", &height);

        if (height >= 10 && height > H) {
            visible_girls++;
        } else if (height < 0 && -height > H) {
            visible_boys++;
        }
    }

    printf("Видно дівчаток: %d\n", visible_girls);
    printf("Видно хлопчиків: %d\n", visible_boys);

    return 0;
}
