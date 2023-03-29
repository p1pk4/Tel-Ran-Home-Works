#include<stdio.h>
void f1();
int globalVar = 333;
const int TEST_CONST = 13579;

int main () {
	/*
	int a = 10;
	printf("main() a = %d\n", a);
	printf("global in main before f1 = %d\n", globalVar);
	f1();
	printf("global var in main = %d\n", globalVar);
	printf("const in main = %d\n", TEST_CONST);
	*/
	return 0;
}

void f1(){
	int a = 100500;
	printf("f1() = %d\n", a);
	printf("global in main before f1 = %d\n", globalVar);
	globalVar = 1234;
	printf("const in f1 = %d\n", TEST_CONST);
}
