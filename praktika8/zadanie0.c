#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count;
	char c, c2;

	printf("Количество символов: ");
	scanf("%d", &count);
	printf("Введите символ:");
	scanf(" %c", c);
	printf("Введите 2 символ:");
	scanf(" &c2", c2);

	for (int i = 1; i <= count; i++) putchar(c);
	putchar('\n');

	putchar('+');
	for (int i = 1; i <= count; i++) putchar(c2);
	putchar('+');
	putchar('\n');

	for (int i = 1; i <= count; i++) putchar(i <= count / 2 ? c : c2);
	putchar('\n');

	for (int i = 1; i <= count; i++) {
		putchar(c);
		putchar('!');
	}
	putchar('\n');
	system("pause");
	return 0;
}
