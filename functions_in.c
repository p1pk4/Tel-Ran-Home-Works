#include<stdio.h>
float const PI = 3.14;
float percent(float a, float per);
float circleLenght(float radius);
float housePrice(int area, float price);
float salary(float hours, float wage, float bonus);
float cashe(float kg, float price, float discount);


int main() {

	printf("percent() return %.2f;\n", percent(30, 10));
	printf("Длина окружности = %.2f;\n", circleLenght(10));
	printf("Цена на квартиру = %.2f;\n", housePrice(113, 33.33));
	printf("Зарплата = %.2f;\n", salary(400, 45, 10));
	printf("Общая стоимость с учетом скидки = %.2f;\n", cashe(10, 10, 50));

	return 0;
}

float percent(float a, float per) {

	return a * per / 100;
}

float circleLenght(float radius) {
	float circle;

	return circle = 2 * radius * PI;
}

float housePrice(int area, float price) {

	return area * price;
}

float salary(float hours, float wage, float bonus) {
	float percentBonus = hours * wage * bonus / 100;
	float salary = hours * wage + percentBonus;

	return salary;
}

float cashe(float kg, float price, float discount) {
	float priceprice = kg * price * discount / 100;
	float totalPrice = kg * price - priceprice;

	return totalPrice;
}
