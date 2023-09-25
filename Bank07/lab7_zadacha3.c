#include <stdio.h>
#include <string.h>

void bubbleSort(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    char temp1[100], temp2[100];
    strcpy(temp1, str1);
    strcpy(temp2, str2);

    bubbleSort(temp1);
    bubbleSort(temp2);

    if (strcmp(temp1, temp2) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Введіть перший рядок: ");
    scanf("%s", str1);
    printf("Введіть другий рядок: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Рядки є анаграмами.\n");
    } else {
        printf("Рядки не є анаграмами.\n");
    }

    return 0;
}
