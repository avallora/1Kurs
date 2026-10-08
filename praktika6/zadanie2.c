#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);

    /*
    F(x) = -3x + 9           при x <= 7
    F(x) = 1 / (x - 7)       при x > 7
    Контрольные примеры :
    x = 0->F = 9
    x = 8->F = 1 / (8 - 7) = 1   */

    printf("F(%.2f) = %.4f\n", x, (x <= 7) ? (-3 * x + 9) : (1.0 / (x - 7)));

    return 0;
    system("pause");
}

