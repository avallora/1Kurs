#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double f(double x)
{
	double c = cos(x + 1);
	return x * x - c * c;
}

int main()
{
	const double a = 0.1, b = 2.2;
	double h;

	printf("Табулирование функции y = x^2 - cos^2(x + 1) на интервале [%.1f; %.1f]\n", a, b);
	// повторный ввод, пока шаг не станет положительным
	printf("Введите шаг табуляции h: ");
	for (scanf("%lf", &h); h <= 0; scanf("%lf", &h))
		printf("Шаг должен быть больше 0. Введите h ещё раз: ");
  
	int n = (int)((b - a) / h + 1e-9);

	printf("______________________\n");
	printf("|   x   |    f(x)    |\n");
	printf("|-------|------------|\n");
	for (int i = 0; i <= n; i++) {
		double x = a + i * h;
		printf("| %5.2f | %10.5f |\n", x, f(x));
	}
	printf("|_______|____________|\n");

	system("pause");
	return 0;
}
