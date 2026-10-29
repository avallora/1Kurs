#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
double fa(double x)
{
	double y;
	if (x <= 3)
		y = x * x - 3 * x + 9;
	else
		y = 1 / (x * x * x + 3);
	return y;
}
 
double fb(double x)
{
	double y;
	y = x * exp(sin(x * x));
	return y;
}
 
int main()
{
	double x;
	int choice;
 
	printf("Введите x: ");
	scanf("%lf", &x);
 
	do {
		printf("\nМеню:\n");
		printf("1 - значение F1(x)\n");
		printf("2 - значение F2(x)\n");
		printf("3 - произведение F1(x) * F2(x)\n");
		printf("4 - разность квадратов F1(x)^2 - F2(x)^2\n");
		printf("5 - удвоенная сумма 2 * (F1(x) + F2(x))\n");
		printf("6 - всё сразу\n");
		printf("7 - ввести новое x\n");
		printf("0 - выход\n");
		printf("Ваш выбор: ");
		scanf("%d", &choice);
 
		switch (choice)
		{
		case 1:
			printf("fa(x) = %lf\n", fa(x));
			break;
		case 2:
			printf("fb(x) = %lf\n", fb(x));
			break;
		case 3:
			printf("произведение: %lf\n", fa(x) * fb(x));
			break;
		case 4:
			printf("разность квадратов: %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
			break;
		case 5:
			printf("удвоенная сумма: %lf\n", 2 * (fa(x) + fb(x)));
			break;
		case 6:
			printf("fa(x) = %lf , fb(x) = %lf\n", fa(x), fb(x));
			printf("произведение: %lf, разность квадратов: %lf, удвоенная сумма: %lf\n",
				fa(x) * fb(x), fa(x) * fa(x) - fb(x) * fb(x), 2 * (fa(x) + fb(x)));
			break;
		case 7:
			printf("Введите x: ");
			scanf("%lf", &x);
			break;
		case 0:
			break;
		default:
			printf("Нет такого пункта меню: %d\n", choice);
		}
	} while (choice != 0);
 
	system("pause");
	return 0;
}
