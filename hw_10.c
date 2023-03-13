#include<stdio.h>
int sumOddDigits(int number);
int factorial(int number);
void printReversNumber(int number);
int reversNumber(int number);

int main() {
	int number = 1234;
	int numberForFactorial = 5;

	printf("sum odd digits = %d;\n", sumOddDigits(number));
	printf("factorial %d = %d;\n", numberForFactorial, factorial(numberForFactorial));
	printReversNumber(number);
	printf("\nrevers number of %d = %d;", number, reversNumber(number));

	return 0;
}

int sumOddDigits(int number) {
	int sum = 0, lastNumber = 0;

	if (number < 0) {
		printf("Wrong number\n");
		return -1;
	}

	do {
		lastNumber = number % 10;
		if (lastNumber % 2 == 1)
			sum += lastNumber;
	} while (number /= 10);
	return sum;
}

int factorial(int number) {
	int result = 1, count = 1;

	if (number < 0) {
		printf("Wrong number!\n");
		return -1;
	}

	do {
		result *= count;
		count++;
	} while (count != number + 1);
	return result;
}

void printReversNumber(int number) {
	int lastDigit;

	if (number < 0)
		printf("Wrong number!");

	do {
		printf("%d", lastDigit = number % 10);
	} while (number /= 10);
}

int reversNumber(int number) {
	int reversNum = 0;

	if (number < 0 || (number % 10 == 0)) {
		printf("Wrong number\n");
		return -1;
	}

	do {
		reversNum = reversNum * 10 + (number % 10);
	} while (number /= 10);
	return reversNum;
}
