#include<stdio.h>
float circleLenght(float radius);
const float PI = 3.14;
float housePrice(int area, float price);
float salary(float hours, float wage, float bonus);

int main() {
	float r = 10.;
	printf("percent = %.2f;\n", circleLenght(r));

	int area = 100;
	float price  = 15000.5;
	printf("percent = %.2f;\n", housePrice(area, price));

	float hours = 182.5, wage = 45.5, bonus = 90.;
	printf("salary = %.2f;\n", salary(hours, wage, bonus));

	return 0;
}

float circleLenght(float radius) {

	return 2 * PI * radius;
}

float housePrice(int area, float price) {
	return area * price;

}

float salary(float hours, float wage, float bonus) {
//	return hours*wage + hours*wage*bonus / 100;
	return hours * wage * (1 + bonus / 100);
}
