#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Functions.h"

int main()
{
    int n;
    printf("Виберіть завдання (введіть число від 1 до 9): ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        Lab1();
        break;
    case 2:
        Lab2();
        break;
    case 3:
        Lab3();
        break;
    case 4:
        Lab4();
        break;
    case 5:
        Lab5();
        break;
    case 6:
        Lab6();
        break;
    case 7:
        Lab7();
        break;
    case 8:
        Lab8();
        break;
    default:
        printf("Неправильне число");
        break;
    }
    return 0;
}
