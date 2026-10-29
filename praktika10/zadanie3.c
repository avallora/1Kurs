#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float area_triangle(float a)
{
	return a * a / 2;
}

void print_definition()
{
	printf("Прямоугольный равнобедренный треугольник - треугольник с прямым углом,\n"
		"у которого катеты равны (a = b). Острые углы равны по 45 градусов,\n"
		"гипотенуза c = a * sqrt(2), площадь S = a^2 / 2.\n");
}

void draw_triangle(int a, char c)
{
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (j == a - i + 1 || j == a || i == a)
				putchar(c);
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

int get_leg()
{
	int a;
	printf("Введите длину катета a: ");
	for (scanf("%d", &a); a < 1; scanf("%d", &a))
		printf("Катет должен быть не меньше 1. Введите a ещё раз: ");
	return a;
}

float compare_triangle(int a, int b)
{
	return area_triangle((float)a) - area_triangle((float)b);
}

int main()
{
	int choice;
	int a = get_leg();
	char c = '*';

	do {
		printf("\nМеню (треугольник с катетом %d):\n", a);
		printf("1 - рассчитать площадь\n");
		printf("2 - вывести определение фигуры\n");
		printf("3 - нарисовать фигуру\n");
		printf("4 - сравнить по площади с другим треугольником\n");
		printf("5 - задать другой катет\n");
		printf("0 - выход\n");
		printf("Ваш выбор: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Площадь: %.2f\n", area_triangle((float)a));
			break;
		case 2:
			print_definition();
			break;
		case 3:
			printf("Введите символ для рисования: ");
			scanf(" %c", &c);
			draw_triangle(a, c);
			break;
		case 4: {
			int b = get_leg();
			float diff = compare_triangle(a, b);
			printf("Разница площадей (катет %d и катет %d): %.2f\n", a, b, diff);
			break;
		}
		case 5:
			a = get_leg();
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
