#include <stdio.h>

int main() {
    int n, m;
    int s = 0;
    int k = 1;

    printf("Введите m: ");
    scanf("%d", &m);
    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        s += i;
        printf("выполнено %d раз\n", k++);
    }

    printf("результат %d\n", s);
    return 0;
}
