#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x, y, z, alpha;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    y = 4.642e-2;
    z = 20.001e2;

    double term1 = log(pow(y, -sqrt(fabs(x))));
    double term2 = (x - y / 2.0);
    double term3 = pow(sin(atan(z)), 2);

    alpha = term1 * term2 + term3;
  
    printf("x = %.3f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3f\n", z);
    printf("alpha = %.3f\n", alpha);

    system("pause");
    return 0;
}
