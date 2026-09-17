#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    const int kolya = 20;
    const int misha = 17;

    int sr = (kolya + misha) / 2;

    int diff_k = kolya - sr;
    int diff_m = sr - misha;

    printf("Возраст Коли: %d\n", kolya);
    printf("Возраст Миши: %d\n", misha);
    printf("Средний возраст: %d\n", sr);
    printf("Отличие Коли от среднего: %d\n", diff_k);
    printf("Отличие Миши от среднего: %d\n", diff_m);

    return 0;
}
