#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float x, y;
    char oper;

    printf("Введите выражение в формате число операция число  : ");
    scanf("%f%c%f", &x, &op, &y);

    switch (oper)
    {
    case '+':
        printf("=%.f\n", x + y);
        break;
    case '-':
        printf("=%.f\n", x - y);
        break;
    case '*':
        printf("=%.f\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("=%.2f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    case '^':
        printf("=%.f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция: %c\n", oper);
    }
}
