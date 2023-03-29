#include<stdio.h>
void f1();// two
void f2();// not
void f3();// or
void f4();// beer

int main() {
	f1();
	f2();
	f3();
	f4();
	f1();
	f2();
	return 0;
}

void f1(){
	printf("two ");
}

void f2(){
	printf("beer ");
}

void f3(){
	printf("or ");
}

void f4(){
	printf("not ");
}
