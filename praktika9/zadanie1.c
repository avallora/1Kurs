#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 
#define ROW 9
#define COL 9
#define SIZE 5
 
int main()
{
	int row, col;
 
	printf("1. Таблица Пифагора:\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", col * row);
		printf("\n");
	}
 
	printf("\n2. Левый нижний треугольник:\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
			printf("%5d", col * row);
		printf("\n");
	}
 
	printf("\n3. Вариант 5:\n");
	for (row = 1; row <= SIZE; ++row)
	{
		for (col = 1; col <= SIZE - row + 1; col++)
			printf("%3d", 1);
		printf("\n");
	}
 
	system("pause");
	return 0;
}
 
