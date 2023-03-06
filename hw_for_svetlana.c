#include<stdio.h>
void whoIsMore(int a, int b);
void isPozitiv(int a);
int sumOrSubst(int a, int b, int c);
void alcohol(int age, int hour);
void isPozitivAdv(int a);


int main() {
	int a = 6, b = 9, c = -2;
	int age = 21;
	int hour = 10;

	whoIsMore(a, b);
	isPozitiv(a);
	printf("%d;\n", sumOrSubst(a, b, c));
	alcohol(age, hour);
	isPozitivAdv(a);

	return 0;
}

void whoIsMore(int a, int b) {

	printf("%d;\n", a > b || a == b ? a : b);
}

void isPozitiv(int a) {

	a >= 0 ? printf("positive;\n") : printf("negative;\n");
}

int sumOrSubst(int a, int b, int c) {

	return c >= 0 ? a + b : a - b;
}

void alcohol(int age, int hour) {
	age >= 21 && (hour >= 10 && hour < 23) ? printf("Enjoy !;\n") : printf("Sorry...;\n");
}

void isPozitivAdv(int a) {
	a == 0 ? printf("zero;\n") : a > 0 ? printf("positive;\n") : printf("negative;\n");

	//a > 0 ? printf("positive;\n") : printf("negative;\n") || a == 0 ?: printf("zero");
	//a > 0 && a < 0 ? (printf("positive;\n")) : printf("negative;\n")) : printf("zero;\n");
	//a != 0 || a > 0 || a < 0 ? printf("zero") : printf("positive;\n") : printf("negative;\n");
}

