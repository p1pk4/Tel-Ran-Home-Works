#include<stdio.h>
void isLeapYear(int year);
void isLeapYearAdvanced();

int main() {

	int y = 0;
	isLeapYear(y);
	isLeapYearAdvanced();

	return 0;
}

void isLeapYear(int year) {
	if (year < 45) {
		printf("Wrong year!\n");
		return;
	}
	if (!(year % 4) && (year % 100 || !(year % 400))) {
		printf("%d is leap year", year);

	} else {
		printf("%d is not leap year", year);

	}
}

void isLeapYearAdvanced() {
	printf("Please enter year more then 45\n");
	int year;

	fflush(stdout);
	scanf("%d", &year);

	isLeapYear(year);
}
