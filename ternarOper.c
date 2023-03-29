#include<stdio.h>
void equals(int a, int b);
void even(int a);
float change(float price, float amount, int percent, int age);

int main() {
	int a = 6, b = 7, c;
	//a > b ? a : b;
	a != b ? printf("Hello;\n") : printf("Bye;\n");

	c = a < 0 ? 5 : 10;
	printf("c = %d;\n", c);



	equals(a,b);
	even(a);

	float price = 120.45, amount = 200;
	int disc = 50, age = 133;
	printf("change = %.2f;\n", change(price, amount, disc, age));
	return 0;
}

void equals(int a, int b) {
	a == b ? printf("%d == %d;", a, b) : printf("%d != %d;\n", a ,b);

}

void even(int a){
	a % 2 == !0 ? printf("Odd;\n") : printf("Even;\n");
}

float change(float price, float amount, int percent, int age){
	return age < 16 || age > 80 ? amount - price *(1 - percent / 100.) : amount - price;
}
