#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");

    float PI = 3.14159, * p1, * p2;

    p1 = p2 = &PI;

    printf("По адресу p1=%p хранится *p1=%g\n", (void*)p1, *p1);
    printf("По адресу p2=%p хранится *p2=%g\n", (void*)p2, *p2);
    printf("p1 = %x, p2 = %x\n", (unsigned int)(unsigned long)p1,
        (unsigned int)(unsigned long)p2);
    *p1 = 2.71828;
    printf("После *p1 = 2.71828: PI=%g, *p2=%g\n", PI, *p2);

    return 0;
}
