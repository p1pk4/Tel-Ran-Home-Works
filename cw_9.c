#include<stdio.h>


int main() {
	int a, b, c, d;
	a = b = c = d = 0;
	printf("a = %d, b =%d, c = %d, b = %d\n", a, b, c, d);

	c = a++;
	d = ++b;
	printf("a = %d, b =%d, c = %d, b = %d\n", a, b, c, d);

//	printf("a = %d\n", a);
//	printf("b = %d\n", b);

	return 0;
}
