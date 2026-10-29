#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long number;
	char answer;
 
	do {
		printf("Введите целое число: ");
		scanf("%lld", &number);
		long long m = number < 0 ? -number : number;
		int sum = 0;

		for (; m > 0; m /= 10) {
			int digit = (int)(m % 10);
			if (digit % 2 == 1)
				sum += digit;
		}
 
		printf("Сумма нечётных цифр числа %lld: %d\n", number, sum);
 
		printf("Продолжить? (Да - y, нет - n): ");
		scanf(" %c", &answer);
	} while (answer != 'n');
 
	system("pause");
	return 0;
}
 
