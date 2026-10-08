#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
        char c;
        printf("Введите символ: ");
        scanf(" %c", &c);

        switch (c)
        {
        case '0':
        case '1':
        case '2':
            printf("Это цифра\n");
            break;
        case 'a':
        case 'b':
        case 'c':
            printf("Это буква\n");
            break;
        default:
            printf("Это не буква и не цифра\n");
            break;
        }
    }
