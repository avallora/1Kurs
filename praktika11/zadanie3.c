#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NMAX 100

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int massiv[NMAX];
    int n;

    printf("Введите количество элементов n: ");
    scanf("%d", &n);

    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", &massiv[i]);
    }

    int first_zero = -1;
    int second_zero = -1;

    for (int i = 0; i < n; i++)
    {
        if (massiv[i] == 0)
        {
            if (first_zero == -1)
                first_zero = i;
            else
            {
                second_zero = i;
                break;
            }
        }
    }

    if (first_zero == -1 || second_zero == -1)
    {
        printf("\nВ массиве меньше двух нулей — условие задачи не выполнено.\n");
        return 0;
    }

    if (second_zero - first_zero == 1)
    {
        printf("\nНули стоят рядом — между ними нет элементов.\n");
        return 0;
    }

    long long proizvedenie = 1;
    for (int i = first_zero + 1; i < second_zero; i++)
    {
        proizvedenie *= massiv[i];
    }

    printf("\nПервый ноль: a[%d]\n", first_zero + 1);
    printf("Второй ноль: a[%d]\n", second_zero + 1);
    printf("Произведение между ними = %lld\n", proizvedenie);

    return 0;
}