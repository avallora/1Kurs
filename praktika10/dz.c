#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double ln_n(double x, int N)
{
	double q = (x - 1) / (x + 1);
	double q2 = q * q;
	double power = q;
	double sum = 0;
	for (int n = 0; n < N; n++) {
		sum += power / (2 * n + 1);
		power *= q2;
	}
	return 2 * sum;
}

double ln_eps(double x, double eps)
{
	double q = (x - 1) / (x + 1);
	double q2 = q * q;
	double power = q;
	double term = q;
	double sum = 0;
	for (int n = 0; fabs(term) >= eps; n++) {
		sum += term;
		power *= q2;
		term = power / (2 * (n + 1) + 1);
	}
	return 2 * sum;
}

int main()
{
	double x, eps;
	int N;

	printf("Введите x (x > 0): ");
	for (scanf("%lf", &x); x <= 0; scanf("%lf", &x))
		printf("x должно быть больше 0. Введите x ещё раз: ");
	printf("Введите число суммируемых членов ряда N: ");
	scanf("%d", &N);
	printf("Введите точность eps (например 0.000001): ");
	scanf("%lf", &eps);

	double s0 = log(x);
	double s1 = ln_n(x, N);
	double s2 = ln_eps(x, eps);

	printf("\n%-28s %-14s %s\n", "способ", "значение", "отличие от log(x)");
	printf("%-28s %-14.10f %s\n", "log(x) из библиотеки", s0, "-");
	printf("%-28s %-14.10f %.10f\n", "сумма N членов ряда", s1, fabs(s1 - s0));
	printf("%-28s %-14.10f %.10f\n", "ряд с точностью eps", s2, fabs(s2 - s0));

	system("pause");
	return 0;
}
