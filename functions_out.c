#include<stdio.h>
int f1();
int f2();
float f3();
float f4();
float f5();


int main() {
	printf("f1() return %d;\n", f1());
	printf("f2() return %d;\n", f2());
	printf("f3() return %.2f;\n", f3());
	printf("f4() return %.2f;\n", f4());
	printf("f5() return %.2f;\n", f5());

	return 0;
}

int f1() {
	int a = 20;

	return a * 4;
}

int f2() {
	int a = 50;

	return a - 10;
}

float f3() {
	float a = 32.6;

	return a / 3;
}

float f4() {
	float a = 100, percent = 74, percentFromNumber = a * percent / 100;

	return percentFromNumber;
}

float f5() {
	float a = 10, percent = 50, percentFromNumber = a * percent / 100;

	return percentFromNumber;
}
