#include<stdio.h>
int evenDigitsCount(int number);
int sumDigits(int number);
int xPower(int x, int power);

int main() {
	int number = 123;
	int evenDigitsCounts = evenDigitsCount(number);
	int sumDigit = sumDigits(number);
	int x = 0;
	int power = 0;

	printf("xPower = %d\n", xPower(x, power));
	printf("sum digits = %d\n", sumDigit);
	printf("return Numbers = %d\n", evenDigitsCounts);

	return 0;
}

int evenDigitsCount(int number) {
	int numberForMinus = 0, numberForIf = 0, count = 0;

	while (number != 0) {
		numberForMinus = (number / 10) * 10;
		numberForIf = number - numberForMinus;
		number = numberForMinus / 10;
		if (numberForIf % 2 == 0) {
			count++;
		}
	}
	return count;
}

int sumDigits(int number) {
	int numberForMinus = 0, numberForPlus = 0, count = 0;

	while (number > 0) {
		numberForMinus = (number / 10) * 10;
		numberForPlus = number - numberForMinus;
		count += numberForPlus;
		number = numberForMinus / 10;
	}
	return count;
}

int xPower(int x, int power) {
	int result = 1;

	while (power != 0) {
		result *= x;
		power--;
	}
	return result;
}
