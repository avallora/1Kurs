#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n;
	int sign = 1;
	double s = 0;
 
	printf("Введите целое N (1..9): ");
	for (scanf("%d", &n); n < 1 || n > 9; scanf("%d", &n))
		printf("N должно быть от 1 до 9. Введите N ещё раз: ");
 
	for (int i = 1; i <= n; i++) {
		double term = 1 + i / 10.0;
		s += sign * term;
		sign = -sign;
	}
 
	printf("Результат: %.1f\n", s);
 
	system("pause");
	return 0;
}
 
