//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_CTYPE, "RUS");
//
//    int total_sec;
//    float hours;
//    float minutes;
//    int rem_sec;
//
//    printf("Введите временной интервал в секундах: ");
//    scanf("%d", &total_sec);
//
//    hours = total_sec / 3600;
//    minutes = (total_sec % 3600) / 60;
//    rem_sec = total_sec % 60;
//
//    printf("%d сек. — это: %d ч. %d мин. %d сек.\n\n", total_sec, hours, minutes, rem_sec);
//
//    system("pause");
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float get_hours(int total_sec) {
	return total_sec / 3600.;
}
float get_minutes(int total_sec) {
	return (total_sec % 3600) / 60.;
}
int get_sec(int total_sec) {
	return ( total_sec % 60 );
}

int main() {
	setlocale(LC_CTYPE, "RUS");

	int total_sec;
	int hours;
	int minutes;
	int rem_sec;

	printf("Введите временной интервал в секундах: ");
	scanf("%f", &total_sec);

	hours = get_hours(total_sec);
	minutes = get_minutes(total_sec);
	rem_sec = get_sec(total_sec);

	printf("%d сек. — это: %d ч. %d мин. %d сек.\n\n", total_sec, hours, minutes, rem_sec);

	system("pause");
	return 0;
}
