#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");

    int cena = 2;
    int put = 390;

     float gal_rr = put / 15.;
     float gal_ford = put / 36.;

    float cena_rr = gal_rr * cena;
    float cena_ford = gal_ford * cena;
    float ekonomiya = cena_rr - cena_ford;

    printf("Стоимость на Роллс-Ройсе: %.2f\n", cena_rr);
    printf("Экономия на Форде: %.2f\n", ekonomiya);

    return 0;
}
