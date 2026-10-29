#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char c;
	int a, again;
 
	do {
		printf("Введите символ из которого будет строиться фигура:\n");
		scanf(" %c", &c);
 
		printf("Введите длину катета a:\n");
		for (scanf("%d", &a); a < 1; scanf("%d", &a))
			printf("Катет должен быть не меньше 1. Введите a ещё раз:\n");
 
		printf("Прямоугольный равнобедренный треугольник (только контур):\n\n");
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= a; j++) {
				if (j == a - i + 1 || j == a || i == a)
					putchar(c);
				else
					putchar(' ');
			}
			putchar('\n');
		}
 
		printf("\nПродолжить ? (Да - введите любое число, Нет - введите 0)\n");
		scanf("%d", &again);
	} while (again != 0);
 
	system("pause");
	return 0;
}
