#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double sin_n(double x, int N)
{
	double term = x;
	double sum = 0;
	for (int k = 1; k <= N; k++) {
		sum += term;
		term = -term * x * x / ((2.0 * k) * (2.0 * k + 1));
	}
	return sum;
}

double sin_eps(double x, double eps)
{
	double term = x;
	double sum = 0;
	for (int k = 1; fabs(term) >= eps; k++) {
		sum += term;
		term = -term * x * x / ((2.0 * k) * (2.0 * k + 1));
	}
	return sum;
}

int main()
{
	double x, eps;
	int N;

	printf("Введите x (в радианах): ");
	scanf("%lf", &x);
	printf("Введите число суммируемых членов ряда N: ");
	scanf("%d", &N);
	printf("Введите точность eps (например 0.000001): ");
	scanf("%lf", &eps);

	double s0 = sin(x);
	double s1 = sin_n(x, N);
	double s2 = sin_eps(x, eps);

	printf("\n%-28s %-14s %s\n", "способ", "значение", "отличие от sin(x)");
	printf("%-28s %-14.10f %s\n", "sin(x) из библиотеки", s0, "-");
	printf("%-28s %-14.10f %.10f\n", "сумма N членов ряда", s1, fabs(s1 - s0));
	printf("%-28s %-14.10f %.10f\n", "ряд с точностью eps", s2, fabs(s2 - s0));

	system("pause");
	return 0;
}
