#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define N2 100
#define XMIN 0.1
#define XMAX 2.2

double f(double x)
{
    double c = cos(x + 1.0);
    return x * x - c * c;
}

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double massiv[N2];
    double sum_polojit = 0.0;
    double sum_otric = 0.0;
    int    polojit_count = 0;
    int    otric_count = 0;
    double srednee_znac = 0.0;

    double step = (XMAX - XMIN) / (N2 - 1);

    for (int i = 0; i < N2; i++)
    {
        double x = XMIN + i * step;
        massiv[i] = f(x);
    }

    for (int i = 0; i < N2; i++)
    {
        if (massiv[i] > 0.0)
        {
            sum_polojit += massiv[i];
            polojit_count++;
        }
        else if (massiv[i] < 0.0)
        {
            sum_otric += massiv[i];
            otric_count++;
        }
    }

    if (polojit_count > 0)
    {
        srednee_znac = sum_polojit / polojit_count;
    }

    printf("Массив arr: сумма положительных = %.6f;\n"
        "сумма отрицательных = %.6f;\n"
        "положительных = %d; отрицательных = %d;\n"
        "среднее положительных = %.6f\n",
        sum_polojit, sum_otric, polojit_count, otric_count, srednee_znac);
    system("pause");
    return 0;
}
