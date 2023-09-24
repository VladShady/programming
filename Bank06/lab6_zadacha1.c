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
    
    int heights[num];

    printf("Введіть ріст кожної дитини (позитивні значення для дівчаток та негативні для хлопчиків):\n");

    for (int i = 0; i < num; i++) {
        scanf("%d", &heights[i]);

        if (heights[i] + 10 > H) {
            visible_girls++;
        } else if (heights[i] < 0 && -heights[i] > H) {
            visible_boys++;
        }
    }

    printf("Видно дівчаток: %d\n", visible_girls);
    printf("Видно хлопчиків: %d\n", visible_boys);

    return 0;
}