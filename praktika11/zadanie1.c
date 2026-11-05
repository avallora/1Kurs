#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 10

int main()
{
    setlocale(LC_CTYPE, "RUS");
    float A[N];
    float orig[N];
    float temp;
    double sum = 0.0;
    double aver;

    printf("Введите %d вещественных чисел:\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
        orig[i] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        A[i] = A[i] / 10.0f;
    }

    printf("\n| индекс | исходное значение | новое значение |\n");

    for (int i = 0; i < N; i++)
    {
        printf("| %6d | %17.4f | %14.4f |\n",
               i + 1, orig[i], A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }

    aver = sum / N;

    printf("\nСреднее арифметическое преобразованных элементов: %.4f\n", aver);

    system("pause");
    return 0;
}
