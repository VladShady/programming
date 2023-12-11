#include <stdio.h>
#include <string.h>
#include <math.h>


void main()
{
    struct NOTE
    {
        char name[50];
        char phone_num[50];
        char birthDate[10];
    };
    struct NOTE arr[4];
    // Введення даних про контакти
    for (int i = 0; i < 4; i++)
    {
        printf("Введіть ім'я та прізвище: ");
        scanf("%s", arr[i].name);

        printf("Введіть номер телефону: ");
        scanf("%s", arr[i].phone_num);
        
        printf("Введіть дату народження: ");
        scanf("%s", &arr[i].birthDate);
        
    }
    // Сортування масиву по першим трьом цифрам телефону
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            int phone1 = (arr[j].phone_num[0] - '0') * 100 +
                          (arr[j].phone_num[1] - '0') * 10 +
                          (arr[j].phone_num[2] - '0');
            int phone2 = (arr[j + 1].phone_num[0] - '0') * 100 +
                          (arr[j + 1].phone_num[1] - '0') * 10 +
                          (arr[j + 1].phone_num[2] - '0');
                          
            if (phone1 > phone2)
            {
                struct NOTE temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //Відсортований за номером телефону список
    for(int i = 0; i < 4; i++)
    {
        printf("Ім'я: %s\n", arr[i].name);
        printf("Номер телефону: %s\n", arr[i].phone_num);
        printf("Дата народження: %s\n", arr[i].birthDate);
    }
    
    // Пошук та виведення інформації
    char search_person[50];
    printf("Введіть прізвище для пошуку: ");
    scanf("%s", search_person);
    int found = 0;
    printf("Інформація про персону %s:\n", search_person);
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(arr[i].name, search_person) == 0)
        {
            printf("Ім'я та прізвище: %s\n", arr[i].name);
            printf("Дата народження: %s \n", arr[i].birthDate);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Персону з прізвищем %s не знайдено.\n", search_person);
    }
}