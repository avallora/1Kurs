#include <stdio.h>
#include <locale.h>

void name()
{
    puts("* * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                         *");
    puts("* тема: Разработка консольного приложения *");
    puts("*                                         *");
    puts("*     Выполнил Иванов И.И.                *");
    puts("*                                         *");
    puts("* * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
    puts(" 1  0 .  0 9 . 2 0 0 8  ");
    puts("    _    _   _   _   _   _   _ ");
    puts(" | | |  | | |_|   | | | | | |_|");
    puts(" | |_|  |_|  _|  /_ |_| |_| |_|");
}

int main()
{
    setlocale(LC_CTYPE, "RUS");

    name();
    date();

    return 0;
}