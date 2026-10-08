#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x;
    const double p = 3.0;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    double a = sqrt(p * x);
    double b = p * x * x + sqrt(a);
    double y = pow(log(b * b), 3) + a * x;

    printf("x = %.1f\n", x);
    printf("y = %.3f\n", y);

    system("pause");
    return 0;
}
