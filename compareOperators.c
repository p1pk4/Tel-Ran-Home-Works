#include<stdio.h>

int main() {
	int a = 6, b = 7, c;
	c = a > b;
	printf("%d > %d = %d;\n", a, b, c);

	c = a < b;
	printf("%d < %d = %d;\n", a, b, c);

	c = a >= b;
	printf("%d >= %d = %d;\n", a, b, c);

	c = a <= b;
	printf("%d <= %d = %d;\n", a, b, c);

	c = a == b;
	printf("%d == %d = %d;\n", a, b, c);

	c = a != b;
	printf("%d != %d = %d;\n", a, b, c);

	return 0;
}
