#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int month;

    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("Зима\n");
        break;
    case 3:
    case 4:
    case 5:
        printf("Весна\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("Лето\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("Осень\n");
        break;
    default:
        printf("Неверный номер месяца: %d\n", month);
    }
    system("pause");
    return 0;
}
