#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	long long p = 1;

	printf("Введите n: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("2^%d = %12lld\n", i, p);
		p = p * 2;
	}

	// после цикла p уже равно 2^(n+1), поэтому делим на 2
	double res = p / 2;
	if (res >= 1024)
		printf("Результат: %.1fK\n", res / 1024);
	else
		printf("Результат: %.0f\n", res);

	system("pause");
	return 0;
}
