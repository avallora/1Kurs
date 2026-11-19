#include <stdio.h>
int main()
{
    char* pc, c = 'A';
    int* pi, i = 5;
    double* pd, d = 2.1;

    pc = &c;
    pi = &i;
    pd = &d;

    printf("sizeof(char *)   = %zu байт\n", sizeof(pc)); // размер указателя
    printf("sizeof(int *)    = %zu байт\n", sizeof(pi));
    printf("sizeof(double *) = %zu байт\n", sizeof(pd));

    printf("sizeof(*pc) = %zu байт\n", sizeof(*pc)); // размер значения
    printf("sizeof(*pi) = %zu байт\n", sizeof(*pi));
    printf("sizeof(*pd) = %zu байт\n", sizeof(*pd));

    return 0;
}
