#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int k, rub, kop;

    printf("Введите копейки: ");
    scanf("%d", &k);

    rub = k / 100;
    kop = k % 100;

    if (rub > 0) {
        printf("%d ", rub);
        if (rub % 100 >= 11 && rub % 100 <= 14)
            printf("рублей ");
        else if (rub % 10 == 1)
            printf("рубль ");
        else if (rub % 10 >= 2 && rub % 10 <= 4)
            printf("рубля ");
        else
            printf("рублей ");
    }

    if (rub > 0 && kop > 0) {
        printf("и ");
    }

    if (kop > 0 || k == 0) {
        printf("%d ", kop);
        if (kop >= 11 && kop <= 14)
            printf("копеек");
        else if (kop % 10 == 1)
            printf("копейка");
        else if (kop % 10 >= 2 && kop % 10 <= 4)
            printf("копейки");
        else
            printf("копеек");
    }

    printf("\n");

    system("pause");
    return 0;
}
