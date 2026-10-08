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

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int cond_a = (A % 2 == 0) != (B % 2 == 0);
    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Условие а) (только одно из A и B четное): %d\n", cond_a);
    printf("Условие б) (A, B, C кратны трем): %d\n", cond_b);

    system("pause");
    return 0;
}
