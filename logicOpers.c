#include<stdio.h>

int main() {
	int a = 6, b = 7, c;

	c = a > 0 || b < 0;
	printf("%d > 0 || %d < 0 = %d;\n", a, b, c);

	c = !a;
	printf("c = %d\n", c);

	c = !c;
	printf("c = %d\n", c);


	//=========================================


	return 0;
}
